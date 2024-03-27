#include <iostream>
#include <libpq-fe.h>

using namespace std;

int main() {
    const char *conninfo = "dbname=bank user=root password=root host=localhost port=5429";

    PGconn *conn = PQconnectdb(conninfo);

    if (PQstatus(conn) != CONNECTION_OK){
        cout << "Connection Failed: "<< PQerrorMessage(conn) <<endl;
        PQfinish(conn);
        return 1;
    }

    cout << "Connected Successfully" <<endl;
    PQfinish(conn);
    return 0;
}

