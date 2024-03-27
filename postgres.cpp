#include <iostream>
#include <libpq-fe.h>

using namespace std;

int main() {
    
    string dbname = "bank";
    string user = "root";
    string password = "root";
    string port = "5429";



    // Establish a connection to the database
    PGconn *conn = PQconnectdb("dbname=bank user=root password=root");

    // Check if the connection was successful
    if (PQstatus(conn) != CONNECTION_OK) {
        std::cerr << "Connection to database failed: " << PQerrorMessage(conn) << std::endl;
        PQfinish(conn);
        return 1;
    }

    // Execute a query
    PGresult *res = PQexec(conn, "SELECT * FROM mytable");

    // Check if the query was successful
    if (PQresultStatus(res) != PGRES_TUPLES_OK) {
        std::cerr << "Query execution failed: " << PQresultErrorMessage(res) << std::endl;
        PQclear(res);
        PQfinish(conn);
        return 1;
    }

    // Process the query result
    int numRows = PQntuples(res);
    int numFields = PQnfields(res);
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numFields; ++j) {
            std::cout << PQgetvalue(res, i, j) << "\t";
        }
        std::cout << std::endl;
    }

    // Cleanup
    PQclear(res);
    PQfinish(conn);

    return 0;
}

