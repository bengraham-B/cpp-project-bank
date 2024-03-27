#ifndef POSTGRES_H
#define POSTGRES_H

#include <iostream>
#include <pqxx/pqxx>

using namespace std;
ising namespace pqxx;

void connect(){
   try {
        connection C("dbname=bank user=root password=root hostaddr = 127.0.0.1 port = 5429");

        if (C.is_open()){
            cout << "Connected to DB" << C.dbname() <<endl;
        
        } else {
            cout << "Cannot connect to DB" <<endl;
        }

        C.disconnect();
   }

   catch (const exception &e){
        cerr << e.what() << endl;
   }
}

#endif
