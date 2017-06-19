
       Ctl-Opt DFTACTGRP(*No);
       
      /copy 'headers.rpgle'
       
       Dcl-Pi BARRYSQL;
         gIFS Char(128);
       End-Pi;
       
       Dcl-Ds gInputFile LikeDS(File_Temp);
       Dcl-Ds gOutFile   LikeDS(File_Temp);
       Dcl-Ds gSQLLine Qualified;
         Data   Varchar(2048);
         SQL    Varchar(2048);
         Pieces Varchar(32) Dim(10);
       End-Ds;
       
       DSPLY ('barrySQL started.');
       
       gInputFile.PathFile = %TrimR(gIFS) + x'00';
       gInputFile.OpenMode = 'r' + x'00';
       gInputFile.FilePtr  = OpenFile(%addr(gInputFile.PathFile)
                                     :%addr(gInputFile.OpenMode));
                                     
       If (gInputFile.FilePtr <> *Null);
         //Create file to write to
       
         dow (ReadFile(%addr(gInputFile.RtvData)
              :%Len(gInputFile.RtvData)
              :gInputFile.FilePtr) <> *null);
              
           If (%Subst(gInputFile.RtvData:1:1) = x'25');
             Iter;
           ENDIF;
           
           gInputFile.RtvData = 
             %xlate(x'00' + x'25' + x'0D' + x'05':'    ':gInputFile.RtvData);
           
           gSQLLine.Data = %Trim(gInputFile.RtvData);
           If (%Subst(gSQLLine.Data:1:8) = 'EXEC SQL');
             gSQLLine.SQL = %Subst(gSQLLine.Data:10);
             BarrySQL_Parse();
           Endif;
         Enddo;
         
         CloseFile(gInputFile.FilePtr);
         
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
         BarrySQL_CreatePieces();
         
         Select;
           When (gSQLLine.Pieces(1) = 'CONNECT');
             DSPLY ('Connect found');
           When (gSQLLine.Pieces(1) = 'SELECT');
             DSPLY ('Select statement found');
           When (gSQLLine.Pieces(1) = 'FETCH');
             DSPLY ('Fetch found');
           When (gSQLLine.Pieces(1) = 'CLOSE');
             DSPLY ('Close found');
         Endsl;
       End-Proc;