#ifndef OPTIONS_H
#define OPTIONS_H

using namespace std;

inline int showOptions(){
    int option;
    
    cout << " ===== GOOSE_BANK =====" <<endl;
    cout << " " <<endl;
    cout << "1. Login" << endl;
    cout << "2. Balance" << endl;
    cout << "3. Deposit" << endl;
    cout << "4. Withdraw" << endl;


    cout << " " << endl;
    cout << "Select an Option: ";
    cin >> option;
    
    return option;
}














#endif
