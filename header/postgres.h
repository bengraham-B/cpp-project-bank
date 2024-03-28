#ifndef POSTGRES_H
#define POSTGRES_H

#include <iostream>
// #include <stdexcept> 
#include <libpq-fe.h>
#include "infolder.h"
using namespace std;


void connect(){
    infolder();
    const char *conninfo = "dbname=bank user=root password=root host=localhost port=5429";

    PGconn *conn = PQconnectdb(conninfo);

    if (PQstatus(conn) != CONNECTION_OK){
        cerr << "Connection to DB failed: " << PQerrorMessage(conn) <<endl;
        return;
    }

    cout << "Connected to database successfully" <<endl;

    PQfinish(conn);

}

#endif
