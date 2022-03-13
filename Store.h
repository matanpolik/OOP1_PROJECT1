//
// Created by Matan Polik on 12/03/2022.
//

#ifndef OOP1_PROJECT1_STORE_H
#define OOP1_PROJECT1_STORE_H
#include <utility>

#include "Computer.h"
#define MAX_COMPUTERS_NUMBER 10

class Store {
    string name;
    int numberOfComputers;
    Computer Computers[MAX_COMPUTERS_NUMBER];

public:
    explicit Store(const string& Sname){
        numberOfComputers = 0;
        if(Sname.length() > 10){
            cout<<"Store's name length is too long"<<endl;
            name = "~";
        }
        else name = Sname;
    }

    //---------------------setters----------------------------

    void setName(const string& sname);
    void setPCNum(int PCNum);

    //---------------------getters----------------------------

    int getPCNum();
    string getName();

//---------------------other methods----------------------------

    void addComputer(const Computer& computer);
    void printComputersByName();
    void printComputersByYear();
};

#endif //OOP1_PROJECT1_STORE_H
