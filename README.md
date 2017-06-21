# barrySQL
RPGLE free precompiler for SQL (generates CLI)

### Syntax guide

`barrySQL` will be referenced as BSQL.

1. `**FREE` RPGLE support only.
2. Compiles from the IFS only
3. Does not match regular ILE embedded SQL.
4. All BSQL statements begin with `EXEC SQL` and do not have an end-of-line delimiter.

### Functionality

* **DEFINE** - required in all BSQL modules.
  * `HEADERS` is used to define the prototypes and constants for the DB2 CLI.
  * `FIELDS` is used to define the required fields for the DB2 CLI. (e.g. env, conn, hdl, stmts)

* **CONNECT**
* **SELECT**
* **UPDATE/DELETE/CREATE**
* **FETCH**
* **CLOSE**
* **DISCONNECT**
* **EXECUTE**
