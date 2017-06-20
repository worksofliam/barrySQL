      * generally useful constants *
     D SQL_FALSE       C                   const(  0)
     D SQL_TRUE        C                   const(  1)
      * NTS = Null Terminated string
     D SQL_NTS         C                   const( -3)
      * Size of SQLSTATE, not including null terminating byte
     D SQL_SQLSTATE_SIZE...
     D                 C                   const(  5)
     D SQL_MAX_MESSAGE_LENGTH...
     D                 C                   const(512)

      * RETCODE values
     D SQL_SUCCESS     C                   const(  0)
     D SQL_SUCCESS_WITH_INFO...
     D                 C                   const(  1)
     D SQL_NO_DATA_FOUND...
     D                 C                   const(100)
     D SQL_NEED_DATA   C                   const( 99)
     D SQL_NO_DATA     C                   const(100)
     D SQL_ERROR       C                   const( -1)
     D SQL_INVALID_HANDLE...
     D                 C                   const( -2)

      * SQLFreeStmt option values
     D SQL_CLOSE       C                   const(  0)
     D SQL_DROP        C                   const(  1)
     D SQL_UNBIND      C                   const(  2)
     D SQL_RESET_PARAMS...
     D                 C                   const(  3)

      * SQLSetParam defines
     D SQL_C_DEFAULT   C                   const( 99)

      * SQLTransact option values
     D SQL_COMMIT      C                   const(  0)
     D SQL_ROLLBACK    C                   const(  1)
     D SQL_COMMIT_HOLD...
     D                 C                   const(  2)
     D SQL_ROLLBACK_HOLD...
     D                 C                   const(  3)

      * SQLDriverConnect option values
     D SQL_DRIVER_COMPLETE...
     D                 C                   const(  1)
     D SQL_DRIVER_COMPLETE_REQUIRED...
     D                 C                   const(  1)
     D SQL_DRIVER_NOPROMPT...
     D                 C                   const(  1)

      *  Valid option codes for GetInfo procedure
     D SQL_ACTIVE_CONNECTIONS...
     D                 C                   const(  0)
     D SQL_ACTIVE_STATEMENTS...
     D                 C                   const(  1)
     D SQL_PROCEDURES  C                   const(  2)
     D SQL_DBMS_NAME   C                   const( 17)
     D SQL_DBMS_VER    C                   const( 18)
     D SQL_MAX_COLUMN_NAME_LEN...
     D                 C                   const( 30)
     D SQL_MAX_CURSOR_NAME_LEN...
     D                 C                   const( 31)
     D SQL_MAX_OWNER_NAME_LEN...
     D                 C                   const( 32)
     D SQL_MAX_SCHEMA_NAME_LEN...
     D                 C                   const( 33)
     D SQL_MAX_TABLE_NAME_LEN...
     D                 C                   const( 35)

      * Standard SQL data types
     D SQL_CHAR        C                   const(  1)
     D SQL_NUMERIC     C                   const(  2)
     D SQL_DECIMAL     C                   const(  3)
     D SQL_INTEGER     C                   const(  4)
     D SQL_SMALLINT    C                   const(  5)
     D SQL_FLOAT       C                   const(  6)
     D SQL_REAL        C                   const(  7)
     D SQL_DOUBLE      C                   const(  8)
     D SQL_DATETIME    C                   const(  9)
     D SQL_VARCHAR     C                   const( 12)
     D SQL_BLOB        C                   const( 13)
     D SQL_CLOB        C                   const( 14)
     D SQL_DBCLOB      C                   const( 15)
     D SQL_DATALINK    C                   const( 16)
     D SQL_WCHAR       C                   const( 17)
     D SQL_WVARCHAR    C                   const( 18)
     D SQL_BIGINT      C                   const( 19)
     D SQL_BLOB_LOCATOR...
     D                 C                   const( 20)
     D SQL_CLOB_LOCATOR...
     D                 C                   const( 21)
     D SQL_DBCLOB_LOCATOR...
     D                 C                   const( 22)
     D SQL_WLONGVARCHAR...
     D                 C                   const( 18)
     D SQL_LONGVARCHAR...
     D                 C                   const( 12)
     D SQL_GRAPHIC     C                   const( 95)
     D SQL_VARGRAPHIC  C                   const( 96)
     D SQL_LONGVARGRAPHIC...
     D                 C                   const( 96)
     D SQL_BINARY      C                   const( 97)
     D SQL_VARBINARY   C                   const( 98)
     D SQL_LONGVARBINARY...
     D                 C                   const( 98)
     D SQL_DATE        C                   const( 91)
     D SQL_TYPE_DATE   C                   const( 91)
     D SQL_TIME        C                   const( 92)
     D SQL_TYPE_TIME   C                   const( 92)
     D SQL_TIMESTAMP   C                   const( 93)
     D SQL_TYPE_TIMESTAMP...
     D                 C                   const( 93)
     D SQL_CODE_DATE   C                   const(  1)
     D SQL_CODE_TIME   C                   const(  2)
     D SQL_CODE_TIMESTAMP...
     D                 C                   const(  3)
     D SQL_ALL_TYPES   C                   const(  0)

      *
      * NULL status defines; these are used in SQLColAttributes, SQLDescribeCol,
      * to describe the nullability of a column in a table.
     D SQL_UNUSED      C                   const(  0)
     D SQL_HANDLE_ENV  C                   const(  1)
     D SQL_HANDLE_DBC  C                   const(  2)
     D SQL_HANDLE_STMT...
     D                 C                   const(  3)
     D SQL_HANDLE_DESC...
     D                 C                   const(  4)
     D SQL_NULL_HANDLE...
     D                 C                   const(  0)

     D SQL_NO_NULLS    C                   const(  0)
     D SQL_NULLABLE    C                   const(  1)
     D SQL_NULLABLE_UNKNOWN...
     D                 C                   const(  2)

      * Special length values
     D SQL_NULL_DATA   C                   const( -1)
     D SQL_DATA_AT_EXEC...
     D                 C                   const( -2)
     D SQL_BIGINT_PREC...
     D                 C                   const( 19)
     D SQL_INTEGER_PREC...
     D                 C                   const( 10)
     D SQL_SMALLINT_PREC...
     D                 C                   const(  5)

      * SQLColAttributes defines */
     D SQL_ATTR_READONLY...
     D                 C                   const(  0)
     D SQL_ATTR_WRITE  C                   const(  1)
     D SQL_ATTR_READWRITE_UNKNOWN...
     D                 C                   const(  2)

      * Valid concurrency values
     D SQL_CONCUR_LOCK...
     D                 C                   const(  0)
     D SQL_CONCUR_READ_ONLY...
     D                 C                   const(  1)

      *  Valid environment attributes
     D SQL_ATTR_OUTPUT_NTS...
     D                 C                   const(10001)
     D SQL_ATTR_SYS_NAMING...
     D                 C                   const(10002)
     D SQL_ATTR_DEFAULT_LIB...
     D                 C                   const(10003)
     D SQL_ATTR_SERVER_MODE...
     D                 C                   const(10004)
     D SQL_ATTR_JOB_SORT_SEQUENCE...
     D                 C                   const(10005)
     D SQL_ATTR_ENVHNDL_COUNTER...
     D                 C                   const(10009)
     D SQL_ATTR_ESCAPE_CHAR...
     D                 C                   const(10010)

      *  Valid environment/connection attributes
     D SQL_ATTR_DATE_FMT...
     D                 C                   const(10020)
     D SQL_ATTR_DATE_SEP...
     D                 C                   const(10021)
     D SQL_ATTR_TIME_FMT...
     D                 C                   const(10022)
     D SQL_ATTR_TIME_SEP...
     D                 C                   const(10023)
     D SQL_ATTR_DECIMAL_SEP...
     D                 C                   const(10024)

      *  Valid environment/connection values
     D SQL_FMT_ISO     C                   const(  1)
     D SQL_FMT_USA     C                   const(  2)
     D SQL_FMT_EUR     C                   const(  3)
     D SQL_FMT_JIS     C                   const(  4)
     D SQL_FMT_MDY     C                   const(  5)
     D SQL_FMT_DMY     C                   const(  6)
     D SQL_FMT_YMD     C                   const(  7)
     D SQL_FMT_JUL     C                   const(  8)
     D SQL_FMT_HMS     C                   const(  9)
     D SQL_FMT_JOB     C                   const( 10)
     D SQL_SEP_SLASH   C                   const(  1)
     D SQL_SEP_DASH    C                   const(  2)
     D SQL_SEP_PERIOD  C                   const(  3)
     D SQL_SEP_COMMA   C                   const(  4)
     D SQL_SEP_BLANK   C                   const(  5)
     D SQL_SEP_COLON   C                   const(  6)
     D SQL_SEP_JOB     C                   const(  7)

      *  Valid values for type in GetCol
     D SQL_DEFAULT     C                   const( 99)
     D SQL_ARD_TYPE    C                   const(-99)

      *  Valid values for UPDATE_RULE and DELETE_RULE in SQLForeignKeys
     D SQL_CASCADE     C                   const(  1)
     D SQL_RESTRICT    C                   const(  2)
     D SQL_NO_ACTION   C                   const(  3)
     D SQL_SET_NULL    C                   const(  4)
     D SQL_SET_DEFAULT...
     D                 C                   const(  5)

      *  Valid values for COLUMN_TYPE in SQLProcedureColumns
     D SQL_PARAM_INPUT...
     D                 C                   const(1)
     D SQL_PARAM_OUTPUT...
     D                 C                   const(2)
     D SQL_PARAM_INPUT_OUTPUT...
     D                 C                   const(3)

      * statement attributes
     D SQL_ATTR_APP_ROW_DESC...
     D                 C                   const(10010)
     D SQL_ATTR_APP_PARAM_DESC...
     D                 C                   const(10011)
     D SQL_ATTR_IMP_ROW_DESC...
     D                 C                   const(10012)
     D SQL_ATTR_IMP_PARAM_DESC...
     D                 C                   const(10013)
     D SQL_ATTR_FOR_FETCH_ONLY...
     D                 C                   const(10014)
     D SQL_ATTR_CONCURRENCY...
     D                 C                   const(10014)
     D SQL_CONCURRENCY...
     D                 C                   const(10014)
     D SQL_ATTR_CURSOR_SCROLLABLE...
     D                 C                   const(10015)
     D SQL_ATTR_ROWSET_SIZE...
     D                 C                   const(10016)
     D SQL_ROWSET_SIZE...
     D                 C                   const(10016)

      *  Codes used in FetchScroll
     D SQL_FETCH_NEXT  C                   const(  1)
     D SQL_FETCH_FIRST...
     D                 C                   const(  2)
     D SQL_FETCH_LAST  C                   const(  3)
     D SQL_FETCH_PRIOR...
     D                 C                   const(  4)
     D SQL_FETCH_ABSOLUTE...
     D                 C                   const(  5)
     D SQL_FETCH_RELATIVE...
     D                 C                   const(  6)

      * SQLColAttributes defines
     D SQL_DESC_COUNT  C                   const(  1)
     D SQL_DESC_TYPE   C                   const(  2)
     D SQL_DESC_LENGTH...
     D                 C                   const(  3)
     D SQL_DESC_LENGTH_PTR...
     D                 C                   const(  4)
     D SQL_DESC_PRECISION...
     D                 C                   const(  5)
     D SQL_DESC_SCALE...
     D                 C                   const(  6)
     D SQL_DESC_DATETIME_INTERVAL_CODE...
     D                 C                   const(  7)
     D SQL_DESC_NULLABLE...
     D                 C                   const(  8)
     D SQL_DESC_INDICATOR_PTR...
     D                 C                   const(  9)
     D SQL_DESC_DATA_PTR...
     D                 C                   const( 10)
     D SQL_DESC_NAME   C                   const( 11)
     D SQL_DESC_UNNAMED...
     D                 C                   const( 12)
     D SQL_DESC_DISPLAY_SIZE...
     D                 C                   const( 13)
     D SQL_DESC_ALLOC_TYPE...
     D                 C                   const( 99)
     D SQL_DESC_ALLOC_AUTO...
     D                 C                   const(  1)
     D SQL_DESC_ALLOC_USER...
     D                 C                   const(  2)

     D SQL_COLUMN_COUNT...
     D                 C                   const(  1)
     D SQL_COLUMN_TYPE...
     D                 C                   const(  2)
     D SQL_COLUMN_LENGTH...
     D                 C                   const(  3)
     D SQL_COLUMN_LENGTH_PTR...
     D                 C                   const(  4)
     D SQL_COLUMN_PRECISION...
     D                 C                   const(  5)
     D SQL_COLUMN_SCALE...
     D                 C                   const(  6)
     D SQL_COLUMN_DATETIME_INTERVAL_CODE...
     D                 C                   const(  7)
     D SQL_COLUMN_NULLABLE...
     D                 C                   const(  8)
     D SQL_COLUMN_INDICATOR_PTR...
     D                 C                   const(  9)
     D SQL_COLUMN_DATA_PTR...
     D                 C                   const( 10)
     D SQL_COLUMN_NAME...
     D                 C                   const( 11)
     D SQL_COLUMN_UNNAMED...
     D                 C                   const( 12)
     D SQL_COLUMN_DISPLAY_SIZE...
     D                 C                   const( 13)
     D SQL_COLUMN_ALLOC_TYPE...
     D                 C                   const( 99)
     D SQL_COLUMN_ALLOC_AUTO...
     D                 C                   const(  1)
     D SQL_COLUMN_ALLOC_USER...
     D                 C                   const(  2)

      *  Valid codes for SpecialColumns procedure
     D SQL_SCOPE_CURROW...
     D                 C                   const(  0)
     D SQL_SCOPE_TRANSACTION...
     D                 C                   const(  1)
     D SQL_SCOPE_SESSION...
     D                 C                   const(  2)
     D SQL_PC_UNKNOWN...
     D                 C                   const(  0)
     D SQL_PC_NOT_PSEUDO...
     D                 C                   const(  1)
     D SQL_PC_PSEUDO...
     D                 C                   const(  2)

      *  Valid values for connect attribute
     D SQL_ATTR_AUTO_IPD...
     D                 C                   const(10001)
     D SQL_ATTR_ACCESS_MODE...
     D                 C                   const(10002)
     D SQL_ACCESS_MODE...
     D                 C                   const(10002)
     D SQL_ATTR_AUTOCOMMIT...
     D                 C                   const(10003)
     D SQL_AUTOCOMMIT...
     D                 C                   const(10003)
     D SQL_ATTR_DBC_SYS_NAMING...
     D                 C                   const(10004)
     D SQL_ATTR_DBC_DEFAULT_LIB...
     D                 C                   const(10005)
     D SQL_ATTR_COMMIT...
     D                 C                   const(  0)
     D SQL_MODE_READ_ONLY...
     D                 C                   const(  0)
     D SQL_MODE_READ_WRITE...
     D                 C                   const(  1)
     D SQL_MODE_DEFAULT...
     D                 C                   const(  1)
     D SQL_AUTOCOMMIT_OFF...
     D                 C                   const(  0)
     D SQL_AUTOCOMMIT_ON...
     D                 C                   const(  1)
     D SQL_TXN_ISOLATION...
     D                 C                   const(  0)
     D SQL_COMMIT_NONE...
     D                 C                   const(  1)
     D SQL_TXN_NO_COMMIT...
     D                 C                   const(  1)
     D SQL_TXN_NOCOMMIT...
     D                 C                   const(  1)
     D SQL_COMMIT_CHG...
     D                 C                   const(  2)
     D SQL_COMMIT_UR...
     D                 C                   const(  2)
     D SQL_TXN_READ_UNCOMMITTED...
     D                 C                   const(  2)
     D SQL_COMMIT_CS...
     D                 C                   const(  3)
     D SQL_TXN_READ_COMMITTED...
     D                 C                   const(  3)
     D SQL_COMMIT_ALL...
     D                 C                   const(  4)
     D SQL_COMMIT_RS...
     D                 C                   const(  4)
     D SQL_TXN_REPEATABLE_READ...
     D                 C                   const(  4)
     D SQL_COMMIT_RR...
     D                 C                   const(  5)
     D SQL_TXN_SERIALIZABLE...
     D                 C                   const(  5)

      *  Valid index flags
     D SQL_INDEX_UNIQUE...
     D                 C                   const(  0)
     D SQL_INDEX_ALL...
     D                 C                   const(  1)
     D SQL_INDEX_OTHER...
     D                 C                   const(  3)

      *  Valid File Options
     D SQL_FILE_READ...
     D                 C                   const(  2)
     D SQL_FILE_CREATE...
     D                 C                   const(  8)
     D SQL_FILE_OVERWRITE...
     D                 C                   const( 16)
     D SQL_FILE_APPEND...
     D                 C                   const( 32)

      * Valid types for GetDiagField
     D SQL_DIAG_RETURNCODE...
     D                 C                   const(  1)
     D SQL_DIAG_NUMBER...
     D                 C                   const(  2)
     D SQL_DIAG_ROW_COUNT...
     D                 C                   const(  3)
     D SQL_DIAG_SQLSTATE...
     D                 C                   const(  4)
     D SQL_DIAG_NATIVE...
     D                 C                   const(  5)
     D SQL_DIAG_MESSAGE_TEXT...
     D                 C                   const(  6)
     D SQL_DIAG_DYNAMIC_FUNCTION...
     D                 C                   const(  7)
     D SQL_DIAG_CLASS_ORIGIN...
     D                 C                   const(  8)
     D SQL_DIAG_SUBCLASS_ORIGIN...
     D                 C                   const(  9)
     D SQL_DIAG_CONNECTION_NAME...
     D                 C                   const( 10)
     D SQL_DIAG_SERVER_NAME...
     D                 C                   const( 11)

      *
      * SQLColAttributes defines
      * These are also used by SQLGetInfo
     D  SQL_UNSEARCHABLE...
     D                 C                   const(  0)
     D  SQL_LIKE_ONLY...
     D                 C                   const(  1)
     D  SQL_ALL_EXCEPT_LIKE...
     D                 C                   const(  2)
     D  SQL_SEARCHABLE...
     D                 C                   const(  3)

      * GetFunctions() values to identify CLI functions
     D  SQL_API_SQLALLOCCONNECT...
     D                 C                   const(   1)
     D  SQL_API_SQLALLOCENV...
     D                 C                   const(   2)
     D  SQL_API_SQLALLOCHANDLE...
     D                 C                   const(1001)
     D  SQL_API_SQLALLOCSTMT...
     D                 C                   const(   3)
     D  SQL_API_SQLBINDCOL...
     D                 C                   const(   4)
     D  SQL_API_SQLBINDFILETOCOL...
     D                 C                   const(2002)
     D  SQL_API_SQLBINDFILETOPARAM...
     D                 C                   const(2003)
     D  SQL_API_SQLBINDPARAM...
     D                 C                   const(1002)
     D  SQL_API_SQLBINDPARAMETER...
     D                 C                   const(1023)
     D  SQL_API_SQLCANCEL...
     D                 C                   const(   5)
     D  SQL_API_SQLCLOSECURSOR...
     D                 C                   const(1003)
     D  SQL_API_SQLCOLATTRIBUTES...
     D                 C                   const(   6)
     D  SQL_API_SQLCOLUMNS...
     D                 C                   const(  40)
     D  SQL_API_SQLCONNECT...
     D                 C                   const(   7)
     D  SQL_API_SQLCOPYDESC...
     D                 C                   const(1004)
     D  SQL_API_SQLDATASOURCES...
     D                 C                   const(  57)
     D  SQL_API_SQLDESCRIBECOL...
     D                 C                   const(   8)
     D  SQL_API_SQLDESCRIBEPARAM...
     D                 C                   const(  58)
     D  SQL_API_SQLDISCONNECT...
     D                 C                   const(   9)
     D  SQL_API_SQLDRIVERCONNECT...
     D                 C                   const(  68)
     D  SQL_API_SQLENDTRAN...
     D                 C                   const(1005)
     D  SQL_API_SQLERROR...
     D                 C                   const(  10)
     D  SQL_API_SQLEXECDIRECT...
     D                 C                   const(  11)
     D  SQL_API_SQLEXECUTE...
     D                 C                   const(  12)
     D  SQL_API_SQLEXTENDEDFETCH...
     D                 C                   const(1022)
     D  SQL_API_SQLFETCH...
     D                 C                   const(  13)
     D  SQL_API_SQLFETCHSCROLL...
     D                 C                   const(1021)
     D  SQL_API_SQLFOREIGNKEYS...
     D                 C                   const(  60)
     D  SQL_API_SQLFREECONNECT...
     D                 C                   const(  14)
     D  SQL_API_SQLFREEENV...
     D                 C                   const(  15)
     D  SQL_API_SQLFREEHANDLE...
     D                 C                   const(1006)
     D  SQL_API_SQLFREESTMT...
     D                 C                   const(  16)
     D  SQL_API_SQLGETCOL...
     D                 C                   const(  43)
     D  SQL_API_SQLGETCONNECTATTR...
     D                 C                   const(1007)
     D  SQL_API_SQLGETCONNECTOPTION...
     D                 C                   const(  42)
     D  SQL_API_SQLGETCURSORNAME...
     D                 C                   const(  17)
     D  SQL_API_SQLGETDATA...
     D                 C                   const(  43)
     D  SQL_API_SQLGETDESCFIELD...
     D                 C                   const(1008)
     D  SQL_API_SQLGETDESCREC...
     D                 C                   const(1009)
     D  SQL_API_SQLGETDIAGFIELD...
     D                 C                   const(1010)
     D  SQL_API_SQLGETDIAGREC...
     D                 C                   const(1011)
     D  SQL_API_SQLGETENVATTR...
     D                 C                   const(1012)
     D  SQL_API_SQLGETFUNCTIONS...
     D                 C                   const(  44)
     D  SQL_API_SQLGETINFO...
     D                 C                   const(  45)
     D  SQL_API_SQLGETLENGTH...
     D                 C                   const(2004)
     D  SQL_API_SQLGETPOSITION...
     D                 C                   const(2005)
     D  SQL_API_SQLGETSTMTATTR...
     D                 C                   const(1014)
     D  SQL_API_SQLGETSTMTOPTION...
     D                 C                   const(  46)
     D  SQL_API_SQLGETSUBSTRING...
     D                 C                   const(2006)
     D  SQL_API_SQLGETTYPEINFO...
     D                 C                   const(  47)
     D  SQL_API_SQLLANGUAGES...
     D                 C                   const(2001)
     D  SQL_API_SQLMORERESULTS...
     D                 C                   const(  61)
     D  SQL_API_SQLNATIVESQL...
     D                 C                   const(  62)
     D  SQL_API_SQLNUMPARAMS...
     D                 C                   const(  63)
     D  SQL_API_SQLNUMRESULTCOLS...
     D                 C                   const(  18)
     D  SQL_API_SQLPARAMDATA...
     D                 C                   const(  48)
     D  SQL_API_SQLPARAMOPTIONS...
     D                 C                   const(2007)
     D  SQL_API_SQLPREPARE...
     D                 C                   const(  19)
     D  SQL_API_SQLPRIMARYKEYS...
     D                 C                   const(  65)
     D  SQL_API_SQLPROCEDURECOLUMNS...
     D                 C                   const(  66)
     D  SQL_API_SQLPROCEDURES...
     D                 C                   const(  67)
     D  SQL_API_SQLPUTDATA...
     D                 C                   const(  49)
     D  SQL_API_SQLRELEASEENV...
     D                 C                   const(1015)
     D  SQL_API_SQLROWCOUNT...
     D                 C                   const(  20)
     D  SQL_API_SQLSETCONNECTATTR...
     D                 C                   const(1016)
     D  SQL_API_SQLSETCONNECTOPTION...
     D                 C                   const(  50)
     D  SQL_API_SQLSETCURSORNAME...
     D                 C                   const(  21)
     D  SQL_API_SQLSETDESCFIELD...
     D                 C                   const(1017)
     D  SQL_API_SQLSETDESCREC...
     D                 C                   const(1018)
     D  SQL_API_SQLSETENVATTR...
     D                 C                   const(1019)
     D  SQL_API_SQLSETPARAM...
     D                 C                   const(  22)
     D  SQL_API_SQLSETSTMTATTR...
     D                 C                   const(1020)
     D  SQL_API_SQLSETSTMTOPTION...
     D                 C                   const(  51)
     D  SQL_API_SQLSPECIALCOLUMNS...
     D                 C                   const(  52)
     D  SQL_API_SQLSTATISTICS...
     D                 C                   const(  53)
     D  SQL_API_SQLTABLES...
     D                 C                   const(  54)
     D  SQL_API_SQLTRANSACT...
     D                 C                   const(  23)

      * NULL handle defines
     D  SQL_NULL_HENV...
     D                 C                   const(0)
     D  SQL_NULL_HDBC...
     D                 C                   const(0)
     D  SQL_NULL_HSTMT...
     D                 C                   const(0)

      * C Data Types
     D char_t          S              1A   based(pDummy)
     D short_t         S              5I 0 based(pDummy)
     D ushort_t        S              5U 0 based(pDummy)
     D int_t           S             10I 0 based(pDummy)
     D uint_t          S             10U 0 based(pDummy)
     D long_t          S             10I 0 based(pDummy)
     D ulong_t         S             10U 0 based(pDummy)
     D float_t         S              4F   based(pDummy)
     D double_t        S              8F   based(pDummy)

      * SQL Data Types
     D SDWORD_t        S                   like(long_t      ) based(pDummy)
     D UDWORD_t        S                   like(ulong_t     ) based(pDummy)
     D UWORD_t         S                   like(ushort_t    ) based(pDummy)
     D SWORD_t         S                   like(short_t     ) based(pDummy)

     D SQLCHAR_t       S                   like(char_t      ) based(pDummy)
     D SQLINTEGER_t    S                   like(long_t      ) based(pDummy)
     D SQLSMALLINT_t   S                   like(short_t     ) based(pDummy)
     D SQLUSMALLINT_t  S                   like(UWORD_t     ) based(pDummy)
     D SQLUINTEGER_t   S                   like(UDWORD_t    ) based(pDummy)
     D SQLDOUBLE_t     S                   like(double_t    ) based(pDummy)
     D SQLREAL_t       S                   like(float_t     ) based(pDummy)

     D PTR_t           S               *                      based(pDummy)
     D SQLPOINTER_t    S                   like(PTR_t       ) based(pDummy)
     D HENV_t          S                   like(long_t      ) based(pDummy)
     D HDBC_t          S                   like(long_t      ) based(pDummy)
     D HSTMT_t         S                   like(long_t      ) based(pDummy)
     D HDESC_t         S                   like(long_t      ) based(pDummy)
     D SQLHENV_t       S                   like(HENV_t      ) based(pDummy)
     D SQLHDBC_t       S                   like(HDBC_t      ) based(pDummy)
     D SQLHSTMT_t      S                   like(HSTMT_t     ) based(pDummy)
     D SQLHDESC_t      S                   like(HDESC_t     ) based(pDummy)

     D RETCODE_t       S                   like(SQLINTEGER_t) based(pDummy)
     D SQLRETCODE_t    S                   like(RETCODE_t   ) based(pDummy)

     D SFLOAT          S                   like(float_t     ) based(pDummy)

      *
      * DATE, TIME, and TIMESTAMP structures.  These are for compatibility
      * purposes only.  When actually specifying or retrieving DATE, TIME,
      * and TIMESTAMP values, character strings must be used.
      *

     D DATE_STRUCT_t   DS                  align             based(pDummy)
     D  DATE_STRUCT_year_t...
     D                                     like(SQLSMALLINT_t)
     D  DATE_STRUCT_month_t...
     D                                     like(SQLSMALLINT_t)
     D  DATE_STRUCT_day_t...
     D                                     like(SQLSMALLINT_t)

     D TIME_STRUCT_t   DS                  align             based(pDummy)
     D  TIME_STRUCT_hour_t...
     D                                     like(SQLSMALLINT_t)
     D  TIME_STRUCT_minute_t...
     D                                     like(SQLSMALLINT_t)
     D  TIME_STRUCT_second_t...
     D                                     like(SQLSMALLINT_t)

     D TIMESTAMP_STRUCT_t...
     D                 DS                  align              based(pDummy)
     D  TIMESTAMP_STRUCT_year_t...
     D                                     like(SQLSMALLINT_t)
     D  TIMESTAMP_STRUCT_month_t...
     D                                     like(SQLSMALLINT_t)
     D  TIMESTAMP_STRUCT_day_t...
     D                                     like(SQLSMALLINT_t)
     D  TIMESTAMP_STRUCT_hour_t...
     D                                     like(SQLSMALLINT_t)
     D  TIMESTAMP_STRUCT_minute_t...
     D                                     like(SQLSMALLINT_t)
     D  TIMESTAMP_STRUCT_second_t...
     D                                     like(SQLSMALLINT_t)
     D  TIMESTAMP_STRUCT_fraction_t...
     D                                     like(SQLINTEGER_t )


     D SQLAllocConnect...
     D                 PR                  extproc('SQLAllocConnect')
     D                                     like(SQLRETCODE_t)
     D  i_henv                             value  like(SQLHENV_t    )
     D  o_phdbc                        *   value                                SQLHDBC *

     D SQLAllocEnv...
     D                 PR                  extproc('SQLAllocEnv')
     D                                     like(SQLRETCODE_t)
     D  o_phenv                        *   value                                SQLHENV *

     D SQLAllocHandle...
     D                 PR                  extproc('SQLAllocHandle')
     D                                     like(SQLRETCODE_t)
     D  i_htype                            value  like(SQLSMALLINT_t)
     D  i_ihandle                          value  like(SQLINTEGER_t )
     D  o_handle                       *   value                                SQLINTEGER *

     D SQLAllocStmt...
     D                 PR                  extproc('SQLAllocStmt')
     D                                     like(SQLRETCODE_t)
     D  i_hdbc                             value  like(SQLHDBC_t    )
     D  o_phstmt                       *   value                                SQLHSTMT *

     D SQLBindCol...
     D                 PR                  extproc('SQLBindCol')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_icol                             value  like(SQLSMALLINT_t)
     D  i_fcType                           value  like(SQLSMALLINT_t)
     D  o_rgbValue                         value  like(SQLPOINTER_t )           VOID *
     D  i_cbValueMax                       value  like(SQLINTEGER_t )
     D  o_pcbValue                     *   value                                SQLINTEGER *

     D SQLBindFileToCol...
     D                 PR                  extproc('SQLBindFileToCol')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_icol                             value  like(SQLSMALLINT_t)
     D  o_fName                        *   value                                SQLCHAR *
     D  o_fNameLen                     *   value                                SQLSMALLINT *
     D  o_fOptions                     *   value                                SQLINTEGER *
     D  i_fValueMax                        value  like(SQLSMALLINT_t)
     D  o_sLen                         *   value                                SQLINTEGER *
     D  o_pcbValue                     *   value                                SQLINTEGER *

     D SQLBindFileToParam...
     D                 PR                  extproc('SQLBindFileToParam')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_ipar                             value  like(SQLSMALLINT_t)
     D  i_iType                            value  like(SQLSMALLINT_t)
     D  o_fName                        *   value                                SQLCHAR *
     D  o_fNameLen                     *   value                                SQLSMALLINT *
     D  o_fOptions                     *   value                                SQLINTEGER *
     D  i_fValueMax                        value  like(SQLSMALLINT_t)
     D  o_pcbValue                     *   value                                SQLINTEGER *

     D SQLBindParam...
     D                 PR                  extproc('SQLBindParam')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_ipar                             value  like(SQLSMALLINT_t)
     D  i_fCType                           value  like(SQLSMALLINT_t)
     D  i_fSqlType                         value  like(SQLSMALLINT_t)
     D  i_cbParamDef                       value  like(SQLINTEGER_t )
     D  i_ibScale                          value  like(SQLSMALLINT_t)
     D  io_rpgValue                        value  like(SQLPOINTER_t )           VOID *
     D  i_pcbValue                     *   value                                SQLINTEGER *

     D SQLBindParameter...
     D                 PR                  extproc('SQLBindParameter')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_ipar                             value  like(SQLSMALLINT_t)
     D  i_IOType                           value  like(SQLSMALLINT_t)
     D  i_fCType                           value  like(SQLSMALLINT_t)
     D  i_fSqlType                         value  like(SQLSMALLINT_t)
     D  i_colSize                          value  like(SQLINTEGER_t )
     D  i_scale                            value  like(SQLSMALLINT_t)
     D  io_parValPtr                       value  like(SQLPOINTER_t )           VOID *
     D  i_buffLen                          value  like(SQLINTEGER_t )
     D  i_strLnIndPtr                  *   value                                SQLINTEGER *

     D SQLCancel...
     D                 PR                  extproc('SQLCancel')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )

     D SQLCloseCursor...
     D                 PR                  extproc('SQLCloseCursor')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )

     D SQLColAttributes...
     D                 PR                  extproc('SQLColAttributes')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_icol                             value  like(SQLSMALLINT_t)
     D  i_fDescType                        value  like(SQLSMALLINT_t)
     D  o_rgbDesc                      *   value                                SQLCHAR *
     D  i_cbDescMax                        value  like(SQLINTEGER_t )
     D  o_pcbDesc                      *   value                                SQLINTEGER *
     D  o_pfDesc                       *   value                                SQLINTEGER *

     D SQLColumns...
     D                 PR                  extproc('SQLColumns')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_szCtlgName                   *   value                                SQLCHAR *
     D  i_cbCtlgName                       value  like(SQLSMALLINT_t)
     D  i_szSchmName                   *   value                                SQLCHAR *
     D  i_cbSchmName                       value  like(SQLSMALLINT_t)
     D  i_szTblName                    *   value                                SQLCHAR *
     D  i_cbTblName                        value  like(SQLSMALLINT_t)
     D  i_szColName                    *   value                                SQLCHAR *
     D  i_cbColName                        value  like(SQLSMALLINT_t)

     D SQLConnect...
     D                 PR                  extproc('SQLConnect')
     D                                     like(SQLRETCODE_t)
     D  i_hdbc                             value  like(SQLHDBC_t    )
     D  i_szDSN                        *   value  options(*string)              SQLCHAR *
     D  i_cbDSN                            value  like(SQLSMALLINT_t)           => SQL_NTS
     D  i_szUID                        *   value  options(*string)              SQLCHAR *
     D  i_cbUID                            value  like(SQLSMALLINT_t)           => SQL_NTS
     D  i_szAuthStr                    *   value  options(*string)              SQLCHAR *
     D  i_cbAuthStr                        value  like(SQLSMALLINT_t)           => SQL_NTS

     D SQLCopyDesc...
     D                 PR                  extproc('SQLCopyDesc')
     D                                     like(SQLRETCODE_t)
     D  i_sDesc                            value  like(SQLHDESC_t   )
     D  i_tDesc                            value  like(SQLHDESC_t   )

     D SQLDataSources...
     D                 PR                  extproc('SQLDataSources')
     D                                     like(SQLRETCODE_t)
     D  i_henv                             value  like(SQLHENV_t    )
     D  i_fDirection                       value  like(SQLSMALLINT_t)
     D  o_szDSN                        *   value                                SQLCHAR *
     D  i_cbDSNMax                         value  like(SQLSMALLINT_t)
     D  o_pcbDSN                       *   value                                SQLSMALLINT *
     D  o_szDesc                       *   value                                SQLCHAR *
     D  i_cbDescMax                        value  like(SQLSMALLINT_t)
     D  o_pcbDesc                      *   value                                SQLSMALLINT *

     D SQLDescribeCol...
     D                 PR                  extproc('SQLDescribeCol')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_icol                             value  like(SQLSMALLINT_t)
     D  o_szColName                    *   value                                SQLCHAR *
     D  i_cbColNameMx                      value  like(SQLSMALLINT_t)
     D  o_pcbColName                   *   value                                SQLSMALLINT *
     D  o_pfSqltype                    *   value                                SQLSMALLINT *
     D  o_pcbColDef                    *   value                                SQLINTEGER *
     D  o_pibScale                     *   value                                SQLSMALLINT *
     D  o_pfNullable                   *   value                                SQLSMALLINT *

     D SQLDescribeParam...
     D                 PR                  extproc('SQLDescribeParam')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_iPar                             value  like(SQLSMALLINT_t)
     D  o_pfSqltype                    *   value                                SQLSMALLINT *
     D  o_pcbColDef                    *   value                                SQLINTEGER *
     D  o_pibScale                     *   value                                SQLSMALLINT *
     D  o_pfNullable                   *   value                                SQLSMALLINT *

     D SQLDisconnect...
     D                 PR                  extproc('SQLDisconnect')
     D                                     like(SQLRETCODE_t)
     D  i_hdbc                             value  like(SQLHDBC_t    )

     D SQLDriverConnect...
     D                 PR                  extproc('SQLDriverConnect')
     D                                     like(SQLRETCODE_t)
     D  i_hdbc                             value  like(SQLHDBC_t    )
     D  i_hwnd                             value  like(SQLPOINTER_t )           VOID *
     D  i_szCnStrIn                    *   value                                SQLCHAR
     D  i_cbCnStrIn                        value  like(SQLSMALLINT_t)
     D  o_szCnStrOut                   *   value                                SQLCHAR
     D  i_cbCnStrOutM                      value  like(SQLSMALLINT_t)
     D  o_pcbCnStrOut                  *   value                                SQLSMALLINT *
     D  i_fDrvCompl                        value  like(SQLSMALLINT_t)

     D SQLEndTran...
     D                 PR                  extproc('SQLEndTran')
     D                                     like(SQLRETCODE_t)
     D  i_htype                            value  like(SQLSMALLINT_t)
     D  i_henv                             value  like(SQLHENV_t    )
     D  i_ctype                            value  like(SQLSMALLINT_t)

     D SQLError...
     D                 PR                  extproc('SQLError')
     D                                     like(SQLRETCODE_t)
     D  i_henv                             value  like(SQLHENV_t    )
     D  i_hdbc                             value  like(SQLHDBC_t    )
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  o_szSqlState                   *   value                                SQLCHAR *
     D  o_pfNativeErr                  *   value                                SQLINTEGER *
     D  o_szErrorMsg                   *   value                                SQLCHAR *
     D  i_cbErrMsgMax                      value  like(SQLSMALLINT_t)
     D  o_pcbErrorMsg                  *   value                                SQLSMALLINT *

     D SQLExecDirect...
     D                 PR                  extproc('SQLExecDirect')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_szSqlStr                     *   value  options(*string)              SQLCHAR *
     D  i_cbSqlStr                         value  like(SQLINTEGER_t )           => SQL_NTS

     D SQLExecute...
     D                 PR                  extproc('SQLExecute')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )

     D SQLExtendedFetch...
     D                 PR                  extproc('SQLExtendedFetch')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_fOrient                          value  like(SQLSMALLINT_t)
     D  i_fOffset                          value  like(SQLINTEGER_t )
     D  o_pcrow                        *   value                                SQLINTEGER *
     D  o_rgfRowStat                   *   value                                SQLSMALLINT *

     D SQLFetch...
     D                 PR                  extproc('SQLFetch')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )

     D SQLFetchScroll...
     D                 PR                  extproc('SQLFetchScroll')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_fOrient                          value  like(SQLSMALLINT_t)
     D  i_fOffset                          value  like(SQLINTEGER_t )

     D SQLForeignKeys...
     D                 PR                  extproc('SQLForeignKeys')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_szPkCtlgNme                  *   value                                SQLCHAR *
     D  i_cbPkCtlgNme                      value  like(SQLSMALLINT_t)
     D  i_szPkSchmNme                  *   value                                SQLCHAR *
     D  i_cbPkSchmNme                      value  like(SQLSMALLINT_t)
     D  i_szPkTblNme                   *   value                                SQLCHAR *
     D  i_cbPkTblNme                       value  like(SQLSMALLINT_t)
     D  i_szFkCtlgNme                  *   value                                SQLCHAR *
     D  i_cbFkCtlgNme                      value  like(SQLSMALLINT_t)
     D  i_szFkSchmNme                  *   value                                SQLCHAR *
     D  i_cbFkSchmNme                      value  like(SQLSMALLINT_t)
     D  i_szFkTblNme                   *   value                                SQLCHAR *
     D  i_cbFkTblNme                       value  like(SQLSMALLINT_t)

     D SQLFreeConnect...
     D                 PR                  extproc('SQLFreeConnect')
     D                                     like(SQLRETCODE_t)
     D  i_hdbc                             value  like(SQLHDBC_t    )

     D SQLFreeEnv...
     D                 PR                  extproc('SQLFreeEnv')
     D                                     like(SQLRETCODE_t)
     D  i_henv                             value  like(SQLHENV_t    )

     D SQLFreeHandle...
     D                 PR                  extproc('SQLFreeHandle')
     D                                     like(SQLRETCODE_t)
     D  i_htype                            value  like(SQLSMALLINT_t)
     D  i_handle                           value  like(SQLINTEGER_t )

     D SQLFreeStmt...
     D                 PR                  extproc('SQLFreeStmt')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_fOption                          value  like(SQLSMALLINT_t)

     D SQLGetCol...
     D                 PR                  extproc('SQLGetCol')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_icol                             value  like(SQLSMALLINT_t)
     D  i_fcType                           value  like(SQLSMALLINT_t)
     D  o_rgbValue                         value  like(SQLPOINTER_t )           VOID *
     D  i_cbValueMax                       value  like(SQLINTEGER_t )
     D  o_pcbValue                     *   value                                SQLINTEGER *

     D SQLGetConnectAttr...
     D                 PR                  extproc('SQLGetConnectAttr')
     D                                     like(SQLRETCODE_t)
     D  i_hdbc                             value  like(SQLHDBC_t    )
     D  i_fattr                            value  like(SQLINTEGER_t )
     D  o_pvParam                          value  like(SQLPOINTER_t )           VOID *
     D  i_blen                             value  like(SQLINTEGER_t )
     D  o_slen                         *   value                                SQLINTEGER *

     D SQLGetConnectOption...
     D                 PR                  extproc('SQLGetConnectOption')
     D                                     like(SQLRETCODE_t)
     D  i_hdbc                             value  like(SQLHDBC_t    )
     D  i_fOption                          value  like(SQLSMALLINT_t)
     D  o_pvParam                          value  like(SQLPOINTER_t )           VOID *

     D SQLGetCursorName...
     D                 PR                  extproc('SQLGetCursorName')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  o_szCursor                     *   value                                SQLCHAR *
     D  i_cbCursorMax                      value  like(SQLSMALLINT_t)
     D  o_pcbCursor                    *   value                                SQLSMALLINT *

     D SQLGetData...
     D                 PR                  extproc('SQLGetData')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_icol                             value  like(SQLSMALLINT_t)
     D  i_fcType                           value  like(SQLSMALLINT_t)
     D  o_rgbValue                         value  like(SQLPOINTER_t )           VOID *
     D  i_cbValueMax                       value  like(SQLINTEGER_t )
     D  o_pcbValue                     *   value                                SQLINTEGER *

     D SQLGetDescField...
     D                 PR                  extproc('SQLGetDescField')
     D                                     like(SQLRETCODE_t)
     D  i_hdesc                            value  like(SQLHDESC_t   )
     D  i_irec                             value  like(SQLSMALLINT_t)
     D  i_fDescType                        value  like(SQLSMALLINT_t)
     D  o_rgbDesc                          value  like(SQLPOINTER_t )           VOID *
     D  i_blen                             value  like(SQLINTEGER_t )
     D  i_sLen                         *   value                                SQLINTEGER *

     D SQLGetDescRec...
     D                 PR                  extproc('SQLGetDescRec')
     D                                     like(SQLRETCODE_t)
     D  i_hdesc                            value  like(SQLHDESC_t   )
     D  i_irec                             value  like(SQLSMALLINT_t)
     D  o_rgbDesc                      *   value                                SQLCHAR *
     D  i_cbDescMax                        value  like(SQLSMALLINT_t)
     D  o_pcbDesc                      *   value                                SQLSMALLINT *
     D  o_type                         *   value                                SQLSMALLINT *
     D  o_subType                      *   value                                SQLSMALLINT *
     D  o_length                       *   value                                SQLINTEGER *
     D  o_precision                    *   value                                SQLSMALLINT *
     D  o_scale                        *   value                                SQLSMALLINT *
     D  o_nullable                     *   value                                SQLSMALLINT *

     D SQLGetDiagField...
     D                 PR                  extproc('SQLGetDiagField')
     D                                     like(SQLRETCODE_t)
     D  i_hType                            value  like(SQLSMALLINT_t)
     D  i_handle                           value  like(SQLINTEGER_t )
     D  i_recNum                           value  like(SQLSMALLINT_t)
     D  i_diagID                           value  like(SQLSMALLINT_t)
     D  o_diagInfo                         value  like(SQLPOINTER_t )           VOID *
     D  i_bLen                             value  like(SQLSMALLINT_t)
     D  o_sLen                         *   value                                SQLSMALLINT *

     D SQLGetDiagRec...
     D                 PR                  extproc('SQLGetDiagRec')
     D                                     like(SQLRETCODE_t)
     D  i_hType                            value  like(SQLSMALLINT_t)
     D  i_handle                           value  like(SQLINTEGER_t )
     D  i_recNum                           value  like(SQLSMALLINT_t)
     D  o_szSqlState                   *   value                                SQLCHAR *
     D  o_pfNativeErr                  *   value                                SQLINTEGER *
     D  o_szErrorMsg                   *   value                                SQLCHAR *
     D  i_cbErrMsgMax                      value  like(SQLSMALLINT_t)
     D  o_pcbErrorMsg                  *   value                                SQLSMALLINT *

     D SQLGetEnvAttr...
     D                 PR                  extproc('SQLGetEnvAttr')
     D                                     like(SQLRETCODE_t)
     D  i_henv                             value  like(SQLHENV_t    )
     D  i_Attr                             value  like(SQLINTEGER_t )
     D  o_pParam                           value  like(SQLPOINTER_t )           VOID *
     D  i_cbParamMax                       value  like(SQLINTEGER_t )
     D  o_pcbParam                     *   value                                SQLINTEGER

     D SQLGetFunctions...
     D                 PR                  extproc('SQLGetFunctions')
     D                                     like(SQLRETCODE_t)
     D  i_hdbc                             value  like(SQLHDBC_t    )
     D  i_fFunction                        value  like(SQLSMALLINT_t)
     D  i_pfExists                     *   value                                SQLSMALLINT *

     D SQLGetInfo...
     D                 PR                  extproc('SQLGetInfo')
     D                                     like(SQLRETCODE_t)
     D  i_hdbc                             value  like(SQLHDBC_t    )
     D  i_fInfoType                        value  like(SQLSMALLINT_t)
     D  o_rgbInfoVal                       value  like(SQLPOINTER_t )           VOID *
     D  i_cbInfValMax                      value  like(SQLSMALLINT_t)
     D  o_pcbInfoVal                   *   value                                SQLSMALLINT *

     D SQLGetLength...
     D                 PR                  extproc('SQLGetLength')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_locType                          value  like(SQLSMALLINT_t)
     D  i_locator                          value  like(SQLINTEGER_t )
     D  o_sLength                      *   value                                SQLINTEGER *
     D  o_ind                          *   value                                SQLINTEGER *

     D SQLGetPosition...
     D                 PR                  extproc('SQLGetPosition')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_locType                          value  like(SQLSMALLINT_t)
     D  i_srceLocator                      value  like(SQLINTEGER_t )
     D  i_srchLocator                      value  like(SQLINTEGER_t )
     D  i_srchLiteral                  *   value                                SQLCHAR *
     D  i_srchLitLen                       value  like(SQLINTEGER_t )
     D  i_fPosition                        value  like(SQLINTEGER_t )
     D  o_located                      *   value                                SQLINTEGER *
     D  o_ind                          *   value                                SQLINTEGER *

     D SQLGetStmtAttr...
     D                 PR                  extproc('SQLGetStmtAttr')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_fAttr                            value  like(SQLINTEGER_t )
     D  o_pvParam                          value  like(SQLPOINTER_t )           VOID *
     D  i_bLen                             value  like(SQLINTEGER_t )
     D  o_sLen                         *   value                                SQLINTEGER *

     D SQLGetStmtOption...
     D                 PR                  extproc('SQLGetStmtOption')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_fOption                          value  like(SQLSMALLINT_t)
     D  o_pvParam                          value  like(SQLPOINTER_t )           VOID *

     D SQLGetSubString...
     D                 PR                  extproc('SQLGetSubString')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_locType                          value  like(SQLSMALLINT_t)
     D  i_srceLocator                      value  like(SQLINTEGER_t )
     D  i_fPosition                        value  like(SQLINTEGER_t )
     D  i_length                           value  like(SQLINTEGER_t )
     D  i_tType                            value  like(SQLSMALLINT_t)
     D  o_rgbValue                         value  like(SQLPOINTER_t )           VOID *
     D  i_cbValueMax                       value  like(SQLINTEGER_t )
     D  o_pcbValue                     *   value                                SQLINTEGER *
     D  o_ind                          *   value                                SQLINTEGER *

     D SQLGetTypeInfo...
     D                 PR                  extproc('SQLGetTypeInfo')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_fSqltype                         value  like(SQLSMALLINT_t)

     D SQLLanguages...
     D                 PR                  extproc('SQLLanguages')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )

     D SQLMoreResults...
     D                 PR                  extproc('SQLMoreResults')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )

     D SQLNativeSql...
     D                 PR                  extproc('SQLNativeSql')
     D                                     like(SQLRETCODE_t)
     D  i_hdbc                             value  like(SQLHDBC_t    )
     D  i_szSqlStrIn                   *   value                                SQLCHAR *
     D  i_cbSqlStrIn                       value  like(SQLINTEGER_t )
     D  o_szSqlStrOut                  *   value                                SQLCHAR *
     D  i_cbSqlStrOut                      value  like(SQLINTEGER_t )
     D  o_pcbSqlStrO                   *   value                                SQLINTEGER *

     D SQLNumParams...
     D                 PR                  extproc('SQLNumParams')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_pcpar                        *   value                                SQLSMALLINT *

     D SQLNumResultCols...
     D                 PR                  extproc('SQLNumResultCols')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_pccol                        *   value                                SQLSMALLINT *

     D SQLParamData...
     D                 PR                  extproc('SQLParamData')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  o_prgbValue                        value  like(SQLPOINTER_t )           VOID *

     D SQLParamOptions...
     D                 PR                  extproc('SQLParamOptions')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_crow                             value  like(SQLINTEGER_t )
     D  i_pirow                        *   value                                SQLINTEGER *

     D SQLPrepare...
     D                 PR                  extproc('SQLPrepare')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_szSqlStr                     *   value  options(*string)              SQLCHAR *
     D  i_cbSqlStr                         value  like(SQLSMALLINT_t)           => SQL_NTS

     D SQLPrimaryKeys...
     D                 PR                  extproc('SQLPrimaryKeys')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_szCtlgNme                    *   value                                SQLCHAR *
     D  i_cbCtlgNme                        value  like(SQLSMALLINT_t)
     D  i_szSchmNme                    *   value                                SQLCHAR *
     D  i_cbSchmNme                        value  like(SQLSMALLINT_t)
     D  i_szTblNme                     *   value                                SQLCHAR *
     D  i_cbTblNme                         value  like(SQLSMALLINT_t)

     D SQLProcedureColumns...
     D                 PR                  extproc('SQLProcedureColumns')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_szCtlgNme                    *   value                                SQLCHAR *
     D  i_cbCtlgNme                        value  like(SQLSMALLINT_t)
     D  i_szSchmNme                    *   value                                SQLCHAR *
     D  i_cbSchmNme                        value  like(SQLSMALLINT_t)
     D  i_szProcNme                    *   value                                SQLCHAR *
     D  i_cbProcNme                        value  like(SQLSMALLINT_t)
     D  i_szColNme                     *   value                                SQLCHAR *
     D  i_cbColNme                         value  like(SQLSMALLINT_t)

     D SQLProcedures...
     D                 PR                  extproc('SQLProcedures')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_szCtlgNme                    *   value                                SQLCHAR *
     D  i_cbCtlgNme                        value  like(SQLSMALLINT_t)
     D  i_szSchmNme                    *   value                                SQLCHAR *
     D  i_cbSchmNme                        value  like(SQLSMALLINT_t)
     D  i_szProcNme                    *   value                                SQLCHAR *
     D  i_cbProcNme                        value  like(SQLSMALLINT_t)

     D SQLPutData...
     D                 PR                  extproc('SQLPutData')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_rgbValue                         value  like(SQLPOINTER_t )           VOID *
     D  i_cbValue                          value  like(SQLINTEGER_t )

     D SQLReleaseEnv...
     D                 PR                  extproc('SQLReleaseEnv')
     D                                     like(SQLRETCODE_t)
     D  i_henv                             value  like(SQLHENV_t    )

     D SQLRowCount...
     D                 PR                  extproc('SQLRowCount')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  o_pcrow                        *   value                                SQLINTEGER *

     D SQLSetConnectAttr...
     D                 PR                  extproc('SQLSetConnectAttr')
     D                                     like(SQLRETCODE_t)
     D  i_hdbc                             value  like(SQLHDBC_t    )
     D  i_fAttr                            value  like(SQLINTEGER_t )
     D  i_vParam                           value  like(SQLPOINTER_t )           VOID *
     D  i_sLen                             value  like(SQLINTEGER_t )

     D SQLSetConnectOption...
     D                 PR                  extproc('SQLSetConnectOption')
     D                                     like(SQLRETCODE_t)
     D  i_hdbc                             value  like(SQLHDBC_t    )
     D  i_fOption                          value  like(SQLSMALLINT_t)
     D  i_vParam                           value  like(SQLPOINTER_t )           VOID *

     D SQLSetCursorName...
     D                 PR                  extproc('SQLSetCursorName')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_szCursor                     *   value                                SQLCHAR *
     D  i_cbCursor                         value  like(SQLSMALLINT_t)

     D SQLSetDescField...
     D                 PR                  extproc('SQLSetDescField')
     D                                     like(SQLRETCODE_t)
     D  i_hdesc                            value  like(SQLHDESC_t   )
     D  i_irec                             value  like(SQLSMALLINT_t)
     D  i_fDescType                        value  like(SQLSMALLINT_t)
     D  i_rgbDesc                          value  like(SQLPOINTER_t )           VOID *
     D  i_bLen                             value  like(SQLINTEGER_t )

     D SQLSetDescRec...
     D                 PR                  extproc('SQLSetDescRec')
     D                                     like(SQLRETCODE_t)
     D  i_hdesc                            value  like(SQLHDESC_t   )
     D  i_irec                             value  like(SQLSMALLINT_t)
     D  i_type                             value  like(SQLSMALLINT_t)
     D  i_subType                          value  like(SQLSMALLINT_t)
     D  i_length                           value  like(SQLINTEGER_t )
     D  i_precision                        value  like(SQLSMALLINT_t)
     D  i_scale                            value  like(SQLSMALLINT_t)
     D  i_rgbValue                         value  like(SQLPOINTER_t )           VOID *
     D  i_sLen                         *   value                                SQLINTEGER *
     D  i_indic                        *   value                                SQLSMALLINT *

     D SQLSetEnvAttr...
     D                 PR                  extproc('SQLSetEnvAttr')
     D                                     like(SQLRETCODE_t)
     D  i_henv                             value  like(SQLHENV_t    )
     D  i_attr                             value  like(SQLINTEGER_t )
     D  i_pParam                           value  like(SQLPOINTER_t )           VOID *
     D  i_cbParam                          value  like(SQLINTEGER_t )

     D SQLSetParam...
     D                 PR                  extproc('SQLSetParam')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_ipar                             value  like(SQLSMALLINT_t)
     D  i_fcType                           value  like(SQLSMALLINT_t)
     D  i_fsqltype                         value  like(SQLSMALLINT_t)
     D  i_cbColDef                         value  like(SQLINTEGER_t )
     D  i_ibScale                          value  like(SQLSMALLINT_t)
     D  o_rgbValue                         value  like(SQLPOINTER_t )           VOID *
     D  i_pcbValue                     *   value                                SQLINTEGER *

     D SQLSetStmtAttr...
     D                 PR                  extproc('SQLSetStmtAttr')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_attr                             value  like(SQLINTEGER_t )
     D  i_pParam                           value  like(SQLPOINTER_t )           VOID *
     D  i_vParam                           value  like(SQLINTEGER_t )

     D SQLSetStmtOption...
     D                 PR                  extproc('SQLSetStmtOption')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_fOption                          value  like(SQLSMALLINT_t)
     D  i_vParam                           value  like(SQLPOINTER_t )           VOID *

     D SQLSpecialColumns...
     D                 PR                  extproc('SQLSpecialColumns')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_fColType                         value  like(SQLSMALLINT_t)
     D  i_szCtlgNme                    *   value                                SQLCHAR *
     D  i_cbCtlgNme                        value  like(SQLSMALLINT_t)
     D  i_szSchmNme                    *   value                                SQLCHAR *
     D  i_cbSchmNme                        value  like(SQLSMALLINT_t)
     D  i_szTblNme                     *   value                                SQLCHAR *
     D  i_cbTblNme                         value  like(SQLSMALLINT_t)
     D  i_fScope                           value  like(SQLSMALLINT_t)
     D  i_fNullable                        value  like(SQLSMALLINT_t)

     D SQLStatistics...
     D                 PR                  extproc('SQLStatistics')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_szCtlgNme                    *   value                                SQLCHAR *
     D  i_cbCtlgNme                        value  like(SQLSMALLINT_t)
     D  i_szSchmNme                    *   value                                SQLCHAR *
     D  i_cbSchmNme                        value  like(SQLSMALLINT_t)
     D  i_szTblNme                     *   value                                SQLCHAR *
     D  i_cbTblNme                         value  like(SQLSMALLINT_t)
     D  i_fUnique                          value  like(SQLSMALLINT_t)
     D  i_fAccuracy                        value  like(SQLSMALLINT_t)

     D SQLTables...
     D                 PR                  extproc('SQLTables')
     D                                     like(SQLRETCODE_t)
     D  i_hstmt                            value  like(SQLHSTMT_t   )
     D  i_szCtlgNme                    *   value                                SQLCHAR *
     D  i_cbCtlgNme                        value  like(SQLSMALLINT_t)
     D  i_szSchmNme                    *   value                                SQLCHAR *
     D  i_cbSchmNme                        value  like(SQLSMALLINT_t)
     D  i_szTblNme                     *   value                                SQLCHAR *
     D  i_cbTblNme                         value  like(SQLSMALLINT_t)
     D  i_szTblType                    *   value                                SQLCHAR *
     D  i_cbTblType                        value  like(SQLSMALLINT_t)

     D SQLTransact...
     D                 PR                  extproc('SQLTransact')
     D                                     like(SQLRETCODE_t)
     D  i_henv                             value  like(SQLHENV_t    )
     D  i_hdbc                             value  like(SQLHDBC_t    )
     D  i_fType                            value  like(SQLSMALLINT_t)


      * maximum data source name size
     D SQL_MAX_DSN_LENGTH...
     D                 C                   const(18)

      * maximum identifier name size, e.g. cursor names
     D SQL_MAX_ID_LENGTH...
     D                 C                   const(18)

      * Maximum statement size
     D SQL_MAX_STMT_SIZ...
     D                 C                   const(32767)

      * Maximum record length
     D SQL_MAXRECL...
     D                 C                   const(32766)

      * Size of a SMALLINT
     D SQL_SMALL_LENGTH...
     D                 C                   const(2)

      * Maximum value of a SMALLINT
     D SQL_MAXSMALLVAL...
     D                 C                   const(32767)

      * Minimum value of a SMALLINT
     D SQL_MINSMALLVAL...
     D                 C                   const(-32766)

      * Size of an INTEGER
     D SQL_INT_LENGTH...
     D                 C                   const(4)

      * Maximum value of an INTEGER
     D SQL_MAXINTVAL...
     D                 C                   const(2147483647)

      * Minimum value of an INTEGER
     D SQL_MININTVAL...
     D                 C                   const(-2147483646)

      * Size of a FLOAT
     D SQL_FLOAT_LENGTH...
     D                 C                   const(8)

      * Default precision for DECIMAL
     D SQL_DEFDEC_PRECISION...
     D                 C                   const(5)

      * Default scale for DECIMAL
     D SQL_DEFDEC_SCALE...
     D                 C                   const(0)

      * Maximum scale/prec. for DECIMAL
     D SQL_MAXDECIMAL...
     D                 C                   const(31)

      * Default length for a CHAR
     D SQL_DEFCHAR...
     D                 C                   const(1)

      * Default length for a wchar_t
     D SQL_DEFWCHAR...
     D                 C                   const(1)

      * Maximum length of a CHAR
     D SQL_MAXCHAR...
     D                 C                   const(32766)

      * Maximum length of an LSTRING
     D SQL_MAXLSTR...
     D                 C                   const(255)

      * Maximum length of a VARCHAR
     D SQL_MAXVCHAR...
     D                 C                   const(32740)

      * Maximum length of a VARGRAPHIC
     D SQL_MAXVGRAPH...
     D                 C                   const(16370)

      * Max. length of a BLOB host var
     D SQL_MAXBLOB...
     D                 C                   const(15728640)

      * Max. length of a CLOB host var
     D SQL_MAXCLOB...
     D                 C                   const(15728640)

      * Max. length of an DBCLOB host var
     D SQL_MAXDBCLOB...
     D                 C                   const(7864320)

      * Maximum length of a LONG VARCHAR
     D SQL_LONGMAX...
     D                 C                   const(32740)

      * Max. length of a LONG VARGRAPHIC
     D SQL_LONGGRMAX...
     D                 C                   const(16370)

      * Overhead for LONG VARCHAR in record
     D SQL_LVCHAROH...
     D                 C                   const(26)

      * Overhead for LOB in record
     D SQL_LOBCHAROH...
     D                 C                   const(312)

      * BLOB maximum length, in bytes
     D SQL_BLOB_MAXLEN...
     D                 C                   const(15728640)

      * CLOB maximum length, in chars
     D SQL_CLOB_MAXLEN...
     D                 C                   const(15728640)

      * maxlen for dbcs lobs
     D SQL_DBCLOB_MAXLEN...
     D                 C                   const(7864320)

      * Size of a TIME field
     D SQL_TIME_LENGTH...
     D                 C                   const(3)

      * Size of a TIME field output
     D SQL_TIME_STRLEN...
     D                 C                   const(8)

      * Size of a non-USA TIME field output wothout seconds
     D SQL_TIME_MINSTRLEN...
     D                 C                   const(5)

      * Size of a DATE field
     D SQL_DATE_LENGTH...
     D                 C                   const(4)

      * Size of a DATE field output
     D SQL_DATE_STRLEN...
     D                 C                   const(10)

      * Size of a TIMESTAMP field
     D SQL_STAMP_LENGTH...
     D                 C                   const(10)

      * Size of a TIMESTAMP field output
     D SQL_STAMP_STRLEN...
     D                 C                   const(26)

      * Size of a TIMESTAMP field output without microseconds
     D SQL_STAMP_MINSTRLEN...
     D                 C                   const(19)

      * Size of a BOOLEAN field
     D SQL_BOOLEAN_LENGTH...
     D                 C                   const(1)

      * Size of an indicator value
     D SQL_IND_LENGTH...
     D                 C                   const(2)

      * Max size of Stored Proc Name
     D SQL_MAX_PNAME_LENGTH...
     D                 C                   const(254)

      * Maximum length of Long Identifer
     D SQL_LG_IDENT...
     D                 C                   const(18)

      * Maximum length of Short Identifer
     D SQL_SH_IDENT...
     D                 C                   const(8)

      * Minimum length of Identifiers
     D SQL_MN_IDENT...
     D                 C                   const(1)

      * Max size of Host Variable Name
     D SQL_MAX_VAR_NAME...
     D                 C                   const(30)

      * # of bytes in a kilobyte
     D SQL_KILO_VALUE...
     D                 C                   const(1024)

      * # of bytes in a megabyte
     D SQL_MEGA_VALUE...
     D                 C                   const(1048576)

      * # of bytes in a gigabyte
     D SQL_GIGA_VALUE...
     D                 C                   const(1073741824)

      * SQL extended data types (negative means unsupported)
     D SQL_TINYINT...
     D                 C                   const(-6)
     D SQL_BIT...
     D                 C                   const(-7)

     D SQL_WARN_VAL_TRUNC...
     D                 C                   const('01004')

      * C data type to SQL data type mapping
      * ... CHAR, VARCHAR, DECIMAL, NUMERIC
     D SQL_C_CHAR      C                   const(  1)                           ('SQL_CHAR')
      * ... INTEGER
     D SQL_C_LONG      C                   const(  4)                           ('SQL_INTEGER')
      * ... SMALLINT
     D SQL_C_SHORT     C                   const(  5)                           ('SQL_SMALLINT')
      * ... REAL
     D SQL_C_FLOAT     C                   const(  7)                           ('SQL_REAL')
      * ... FLOAT, DOUBLE
     D SQL_C_DOUBLE    C                   const(  8)                           ('SQL_DOUBLE')
      * ... DATE
     D SQL_C_DATE      C                   const( 91)                           ('SQL_DATE')
      * ... TIME
     D SQL_C_TIME      C                   const( 92)                           ('SQL_TIME')
      * ... TIMESTAMP
     D SQL_C_TIMESTAMP...
     D                 C                   const( 93)                           ('SQL_TIMESTAMP')
      * ... BINARY, VARBINARY
     D SQL_C_BINARY    C                   const( 97)                           ('SQL_BINARY')
     D SQL_C_BIT       C                   const(-7)                            ('SQL_BIT')
     D SQL_C_TINYINT   C                   const(-6)                            ('SQL_TINYINT')
     D SQL_C_BIGINT    C                   const( 19)                           ('SQL_BIGINT')
     D SQL_C_DBCHAR    C                   const( 15)                           ('SQL_DBCLOB')
      * ... UNICODE
     D SQL_C_WCHAR     C                   const( 17)                           ('SQL_WCHAR')
      * ... DATETIME
     D SQL_C_DATETIME  C                   const(  9)                           ('SQL_DATETIME')
     D SQL_C_BLOB      C                   const( 13)                           ('SQL_BLOB')
     D SQL_C_CLOB      C                   const( 14)                           ('SQL_CLOB')
     D SQL_C_DBCLOB    C                   const( 15)                           ('SQL_DBCLOB')
     D SQL_C_BLOB_LOCATOR...
     D                 C                   const( 20)                           ('SQL_BLOB_LOCATOR')
     D SQL_C_CLOB_LOCATOR...
     D                 C                   const( 21)                           ('SQL_CLOB_LOCATOR')
     D SQL_C_DBCLOB_LOCATOR...
     D                 C                   const( 22)                           ('SQL_DBCLOB_LOCAT')