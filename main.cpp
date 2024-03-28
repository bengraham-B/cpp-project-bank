#include <iostream>
#include <cstdlib>

// Importing Bank Header files
#include "header/options.h"
#include "header/login.h"
#include "header/balance.h"
#include "header/infolder.h"
#include "header/insert_transaction.h"

using namespace std;

int main(){
    infolder();
    bool exit = false;
    while (!exit){
        int userOption = showOptions();
        cout << userOption << endl;

        if (userOption == 0){
            exit = true;
        }
        
        else if (userOption == 1){
            login();
        }

        else if (userOption == 2){
            // balance();            
        }

        else if (userOption == 3){
            cout << "Deposit Money" <<endl;
            string name;
            int amount;
            string details;
            string type_;

            cout << "Name: ";
            cin >> name;

            cout << "Amount: ";
            cin >> amount;

            cout << "Details: ";
            cin >> details;

            cout << "Type: ";
            cin >> type_;

            insertTransaction(name, amount, details, type_);

        }
    }
   return 0;
}
