#include <iostream>
#include <cstdlib>

// Importing Bank Header files
#include "options.h"
#include "login.h"
#include "balance.h"

using namespace std;

int main(){
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
            balance();            
        }
    }
   return 0;
}
