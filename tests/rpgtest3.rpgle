**FREE
CTL-OPT DFTACTGRP(*NO);

EXEC SQL DEFINE HEADERS
EXEC SQL DEFINE FIELDS

Dcl-Ds PRODUCTSP Qualified;
  ID Packed(5);
  Name Char(30);
  Desc Char(60);
  Price Packed(7:2);
  Image Char(60);
  Quantity Packed(5);
  Catagory Packed(5);
End-ds;

Dcl-S lText Char(52);

EXEC SQL CONNECT *LOCAL

EXEC SQL SELECT * FROM PRODUCTSP
if (sqlreturn = 0);
  EXEC SQL FETCH INTO PRODUCTSP.ID PRODUCTSP.Name PRODUCTSP.Desc PRODUCTSP.Price PRODUCTSP.Image PRODUCTSP.Quantity PRODUCTSP.Catagory
  
  dow (sqlreturn = 0);
    lText = %Char(PRODUCTSP.ID) + ': ' + %Trim(PRODUCTSP.Desc) + ', ' + %Char(PRODUCTSP.Price);
    DSPLY lText;
    
    EXEC SQL FETCH INTO PRODUCTSP.ID PRODUCTSP.Name PRODUCTSP.Desc PRODUCTSP.Price PRODUCTSP.Image PRODUCTSP.Quantity PRODUCTSP.Catagory
  enddo;
endif;
EXEC SQL CLOSE 


EXEC SQL DISCONNECT

*InLR = *On;
Return;