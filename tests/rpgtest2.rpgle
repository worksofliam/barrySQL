**FREE
CTL-OPT DFTACTGRP(*NO);

EXEC SQL DEFINE HEADERS
EXEC SQL DEFINE FIELDS

Dcl-S lProdID Packed(5);
Dcl-S lProdName Char(30);

EXEC SQL CONNECT *LOCAL

EXEC SQL SELECT PRID, PRNAME FROM PRODUCTSP
if (sqlreturn = 0);
  dou (sqlreturn <> 0);
    EXEC SQL FETCH INTO lProdID lProdName
    DSPLY ('Name: ' + %Trim(lProdName) + ', ' + %Char(lProdID));
  enddo;
endif;
EXEC SQL CLOSE 


EXEC SQL DISCONNECT

*InLR = *On;
Return;