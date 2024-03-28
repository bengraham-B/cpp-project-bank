#ifndef LOGIN_H
#define LOGIN_H

#include <fstream>
using namespace std;

void makeFile(string& userName ){
    std::ofstream outfile("name.txt");

    if (!outfile){
        std::cerr << " File Not Open" <<std::endl;
        
    }
    
    //Writting to the file
    outfile << userName <<endl;

    outfile.close();
    std::cout << "File made Successfully" << std::endl;
}

void login(){
    string name;
    cout << "Enter Name: ";
    cin  >> name;

    cout << "Successfully Login: " + name <<endl; 
    makeFile(name);
}

#endif
