**FREE
CTL-OPT DFTACTGRP(*NO);

EXEC SQL DEFINE HEADERS
EXEC SQL DEFINE FIELDS

Dcl-S lProdID Packed(5);
Dcl-S lProdName Char(30);

EXEC SQL CONNECT *LOCAL

EXEC SQL SELECT PRID, PRNAME FROM PRODUCTSP
EXEC SQL FETCH INTO lProdID lProdName

EXEC SQL CLOSE 
EXEC SQL DISCONNECT

*InLR = *On;
Return;