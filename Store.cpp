//
// Created by Matan Polik on 10/03/2022.
//
#include "Store.h"

//---------------------setters----------------------------

void Store::setName(const string& sname){
    if(sname.length() > 10){
        cout<<"Store's name length is too long"<<endl;
        name = "~";
    }
    else name = sname;
}
void Store::setPCNum(int PCNum){
    numberOfComputers = PCNum;
}

//---------------------getters----------------------------

int Store::getPCNum(){
    return numberOfComputers;
}
string Store::getName(){
    return name;
}

//---------------------other methods----------------------------

void Store::addComputer(const Computer& computer){
    Computers[numberOfComputers] = computer;
    numberOfComputers++;
}

void Store::printComputersByName(){
    Computer* temp[MAX_COMPUTERS_NUMBER];
    Computer* temp2;
    for(int i=0; i<numberOfComputers; i++){
        temp[i]= &Computers[i];
    }
    if(numberOfComputers>1){
        for (int i = 0; i < numberOfComputers; ++i) {
            for (int j = 0; j < (numberOfComputers - 1) - i; ++j) {
                if (temp[j]->getManufacturer() > temp[j + 1]->getManufacturer()) {
                    temp2 = temp[j];
                    temp[j] = temp[j+1];
                    temp[j+1] = temp2;
                }
            }
        }
    }
    cout<<"There are "<<numberOfComputers<<" computers in the store. The computers:"<<endl;
    for (int i = 0; i < numberOfComputers; ++i) {
        cout<<"Computer "<<i+1<<endl;
        temp[i]->print();
    }
}
void Store::printComputersByYear(){
    int count=1;
    Computer* temp[MAX_COMPUTERS_NUMBER];
    Computer* temp2;
    for(int i=0; i<numberOfComputers; i++){
        temp[i] = &Computers[i];
    }

    if(numberOfComputers>1){
        for (int i = 0; i < numberOfComputers; ++i) {
            for (int j = 0; j < (numberOfComputers - 1)-i; ++j) {
                if (temp[j]->getYear() > temp[j + 1]->getYear()) {
                    temp2 = temp[j];
                    temp[j] = temp[j + 1];
                    temp[j + 1] = temp2;
                }
            }
        }
    }


    cout<<"There are "<<numberOfComputers<<" computers in the store. The computers:"<<endl;
    for (int i = 0; i < numberOfComputers; ++i) {
        cout<<"Computer "<<i+1<<endl;
        temp[i]->print();
    }
}