# barrySQL
RPGLE free precompiler for SQL (generates CLI)

### Syntax guide

`barrySQL` will be referenced as BSQL.

1. `**FREE` RPGLE support only.
2. Compiles from the IFS only
3. Does not match regular ILE embedded SQL.
4. Does not type chech against fields provided
5. All BSQL statements begin with `EXEC SQL` and do not have an end-of-line delimiter.

### Functionality

* **DEFINE** - required in all BSQL modules
  * `HEADERS` is used to define the prototypes and constants for the DB2 CLI.
  * `FIELDS` is used to define the required fields for the DB2 CLI. (e.g. env, conn, hdl, stmts)
* **CONNECT** - connect to the local/remote database
  * `EXEC SQL CONNECT *LOCAL` to connect to the local database.
* **SELECT** - Select records from a file
  * `EXEC SQL SELECT ...` to start a basic SELECT statement.
  * When using `SELECT`, you must also use `CLOSE`.
* **FETCH** - Fetch records and out data into fields
  * `INTO field field field` to fetch the next record from the previous SELECT into a set of defined fields.
* **CLOSE** - Close a statement cursor
  * `CLOSE` is used to close the most recently opened `SELECT` statement.
* **UPDATE/DELETE/CREATE** - Execute a UPDATE/DELETE/CREATE statement
  * `EXEC SQL UPDATE`
  * `EXEC SQL DELETE`
  * `EXEC SQL CREATE`
  * Used to execute statements. Does not require a `CLOSE` as does not return results.
* **DISCONNECT** - Disconnect from database 
  * `EXEC SQL DISCONNECT` is used to disconnect from the current connection.
* **EXECUTE** - Execute an SQL statement from a string
  * `EXEC SQL EXECUTE field` to use a character variable as an SQL string.
  * Always requires `CLOSE`.
