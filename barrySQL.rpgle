
       Ctl-Opt DFTACTGRP(*No);
       
      /copy 'headers.rpgle'
       
       Dcl-Pi BARRYSQL;
         gObj Char(21);
         gIFS Char(128);
       End-Pi;
       
       Dcl-S  gCmdRes    Int(3);
       Dcl-Ds gInputFile LikeDS(File_Temp);
       Dcl-Ds gOutFile   LikeDS(File_Temp);
       Dcl-Ds gSQLLine Qualified;
         Data   Varchar(2048);
         SQL    Varchar(2048);
         Pieces Varchar(32) Dim(32);
       End-Ds;
       
       Dcl-S gCurrentSQLStmt Int(3) Inz(0);
       
       DSPLY ('barrySQL started.');
       
       gInputFile.PathFile = %TrimR(gIFS) + x'00';
       gInputFile.OpenMode = 'r' + x'00';
       gInputFile.FilePtr  = OpenFile(%addr(gInputFile.PathFile)
                                     :%addr(gInputFile.OpenMode));
                                     
       If (gInputFile.FilePtr <> *Null);
         BarrySQL_CreateTemp();
       
         dow (ReadFile(%addr(gInputFile.RtvData)
              :%Len(gInputFile.RtvData)
              :gInputFile.FilePtr) <> *null);
              
           If (%Subst(gInputFile.RtvData:1:1) = x'25');
             Iter;
           ENDIF;
           
           gInputFile.RtvData = 
             %xlate(x'00' + x'25' + x'0D' + x'05':'    ':gInputFile.RtvData);
           
           gSQLLine.Data = %Trim(gInputFile.RtvData);
           If (%Len(gSQLLine.Data) >= 8);
             If (%Subst(gSQLLine.Data:1:8) = 'EXEC SQL');
               gSQLLine.SQL = %Subst(gSQLLine.Data:10);
               BarrySQL_Parse();
             Else;
               BarrySQL_WriteTemp(gInputFile.RtvData);
             Endif;
           Else;
             BarrySQL_WriteTemp(gInputFile.RtvData);
           Endif;
           
           gInputFile.RtvData = '';
         Enddo;
         
         CloseFile(gInputFile.FilePtr);
         BarrySQL_CloseTemp();
         
         If (gCurrentSQLStmt > 0);
           DSPLY (%Char(gCurrentSQLStmt) + ' cursor(s) left open!');
         Endif;
         
         gCmdRes = Cmd('CRTBNDRPG PGM(' + %Trim(gObj) + ') SRCSTMF('''
           + %Trim(gIFS) + 'brysql'') OPTION(*EVENTF) DBGVIEW(*SOURCE)');
           
         If (gCmdRes = 0);
           DSPLY ('Program created.');
         Else;
           DSPLY ('Program failed to create.');
         Endif;
         
       Else;
         DSPLY ('Unable to open file.');
       Endif;
       
       DSPLY ('Program end');
       
       *InLR = *On;
       Return;
       
       //*********************************
       
       Dcl-Proc BarrySQL_CreatePieces;
         Dcl-S lIndex    Int(5);
         Dcl-S lCur      Int(5);
         Dcl-S lCurPiece Varchar(32);
         Dcl-S lCurChar  Char(1);
         
         Clear gSQLLine.Pieces;
         lCur = 1;
         lCurPiece = '';
         For lIndex = 1 to %Len(gSQLLine.SQL);
           If (lCur > %Elem(gSQLLine.Pieces));
             Leave;
           Endif;
           
           lCurChar = %Subst(gSQLLine.SQL:lIndex:1);
           If (lCurChar = ' ');
             gSQLLine.Pieces(lCur) = lCurPiece;
             lCurPiece = '';
             lCur += 1;
           Else;
             lCurPiece += lCurChar;
           Endif;
           
         Endfor;
         
         If (lCurPiece <> '');
           gSQLLine.Pieces(lCur) = lCurPiece;
         Endif;
       End-Proc;
       
       //************************************
       
       Dcl-Proc BarrySQL_Parse;
         Dcl-S lIndex Int(3) Inz(1);
         BarrySQL_CreatePieces();
         
         Select;
           When (gSQLLine.Pieces(1) = 'DEFINE');
             If (gSQLLine.Pieces(2) = 'FIELDS');
               BarrySQL_WriteTemp('        Dcl-S env Int(10);');
               BarrySQL_WriteTemp('        Dcl-S hdl Int(10);');
               BarrySQL_WriteTemp('        Dcl-S rlen Int(10);');
               BarrySQL_WriteTemp('        Dcl-S usr char(10) inz(*user);');
               BarrySQL_WriteTemp('        Dcl-S sqltrue like(SQLINTEGER_t) '
                                  + 'inz(SQL_TRUE);');
               BarrySQL_WriteTemp('        Dcl-S sqlreturn '
                                         + 'like(SQLRETCODE_t);');
               BarrySQL_WriteTemp('        Dcl-S stmt Int(10) Dim(10) Inz(0);');
             Endif;
             If (gSQLLine.Pieces(2) = 'HEADERS');
               BarrySQL_WriteTemp('       /COPY ''SQLCLI.h''');
             Endif;
             
           When (gSQLLine.Pieces(1) = 'CONNECT');
             BarrySQL_WriteTemp('        SQLAllocEnv(%Addr(env));');
             BarrySQL_WriteTemp('        SQLAllocConnect(env:%Addr(hdl));');
             BarrySQL_WriteTemp('        sqlreturn = SQLConnect(hdl:'     
                               + '''' + gSQLLine.Pieces(2) + '''' + 
                               ':SQL_NTS:usr:SQL_NTS:'''':SQL_NTS);');
             BarrySQL_WriteTemp('        SQLSetConnectAttr(hdl:' + 
                                'SQL_ATTR_DBC_SYS_NAMING:%Addr(sqltrue):0);');
                                
           When (gSQLLine.Pieces(1) = 'SELECT');
             gCurrentSQLStmt += 1;
             BarrySQL_WriteTemp('        SQLAllocStmt(hdl' + 
                                ':%Addr(stmt(' + %Char(gCurrentSQLStmt)
                                 + ')));');
             BarrySQL_WriteTemp('        sqlreturn = SQLExecDirect(' + 
                                'stmt(' + %Char(gCurrentSQLStmt) + '):' +
                                '''' + gSQLLine.SQL + ''':SQL_NTS);');
                                
           When (gSQLLine.Pieces(1) = 'UPDATE' OR
                 gSQLLine.Pieces(1) = 'DELETE' OR
                 gSQLLine.Pieces(1) = 'CREATE');
             gCurrentSQLStmt += 1;
             BarrySQL_WriteTemp('        SQLAllocStmt(hdl' + 
                                ':%Addr(stmt(' + %Char(gCurrentSQLStmt)
                                 + ')));');
             BarrySQL_WriteTemp('        sqlreturn = SQLExecDirect(' + 
                                'stmt(' + %Char(gCurrentSQLStmt) + '):' +
                                '''' + gSQLLine.SQL + ''':SQL_NTS);');
             BarrySQL_WriteTemp('        SQLFreeStmt('
                               + 'stmt(' + %Char(gCurrentSQLStmt) + '):'
                               + 'SQL_CLOSE);');
             gCurrentSQLStmt -= 1;
                               
                                
           When (gSQLLine.Pieces(1) = 'FETCH');
             If (gSQLLine.Pieces(2) = 'INTO');
               BarrySQL_WriteTemp('        sqlreturn = SQLFetch(stmt('
                                  + %Char(gCurrentSQLStmt) + '));');
               
               lIndex = 3;
               Dow (gSQLLine.Pieces(lIndex) <> '');
                 If (gSQLLine.Pieces(lIndex) <> '*OMIT');
                   BarrySQL_WriteTemp('        SQLGetCol(stmt('
                                    + %Char(gCurrentSQLStmt) + '):'
                                    + %Char(lIndex - 2) + ':SQL_DEFAULT:'
                                    + '%Addr(' + gSQLLine.Pieces(lIndex) + '):'
                                    + '%Size(' + gSQLLine.Pieces(lIndex) + '):'
                                    + '%Addr(rlen));');
                 Endif;
                 lIndex += 1;
               Enddo;
             Endif;
             
           When (gSQLLine.Pieces(1) = 'CLOSE');
             BarrySQL_WriteTemp('        SQLCloseCursor(' 
                               + 'stmt(' + %Char(gCurrentSQLStmt) + '));');
             BarrySQL_WriteTemp('        SQLFreeStmt('
                               + 'stmt(' + %Char(gCurrentSQLStmt) + '):'
                               + 'SQL_CLOSE);');
             gCurrentSQLStmt -= 1;
                               
           When (gSQLLine.Pieces(1) = 'DISCONNECT');
             BarrySQL_WriteTemp('        SQLDisconnect(hdl);');
             BarrySQL_WriteTemp('        SQLFreeConnect(hdl);');
             BarrySQL_WriteTemp('        SQLFreeEnv(env);');
             
           When (gSQLLine.Pieces(1) = 'EXECUTE');
             gCurrentSQLStmt += 1;
             BarrySQL_WriteTemp('        SQLAllocStmt(hdl' + 
                                ':%Addr(stmt(' + %Char(gCurrentSQLStmt)
                                 + ')));');
             BarrySQL_WriteTemp('        sqlreturn = SQLExecDirect(' + 
                                'stmt(' + %Char(gCurrentSQLStmt) + '):' +
                                gSQLLine.Pieces(2) + ':SQL_NTS);');
             
         Endsl;
       End-Proc;
       
       //************************************
       
       Dcl-Proc BarrySQL_CreateTemp;
         gOutFile.PathFile = %Trim(gIFS) + 'brysql' + x'00';
         gOutFile.OpenMode = 'w' + x'00';
         gOutFile.FilePtr  = OpenFile(%addr(gOutFile.PathFile)
                                     :%addr(gOutFile.OpenMode));
                                     
         DSPLY ('Output file created');
       End-Proc;
       
       Dcl-Proc BarrySQL_WriteTemp;
         Dcl-Pi *N;
           pValue Char(132) Value;
         END-PI;
         
         pValue = %TrimR(pValue) + x'25';
         WriteFile(%Addr(pValue)
                  :%Len(%TrimR(pValue))
                  :1
                  :gOutFile.FilePtr);
       End-Proc;
       
       Dcl-Proc BarrySQL_CloseTemp;
         CloseFile(gOutFile.FilePtr);
       End-Proc;
