#include <iostream>
#include <cstdlib>

// Importing Bank Header files
#include "header/options.h"
#include "header/login.h"
#include "header/balance.h"
#include "header/infolder.h"

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
            balance();            
        }
    }
   return 0;
}
