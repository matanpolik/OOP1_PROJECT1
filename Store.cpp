//
// Created by Matan Polik on 10/03/2022.
//

#include "Store.h"

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

int Store::getPCNum(){
    return numberOfComputers;
}
string Store::getName(){
    return name;
}

void Store::addComputer(const Computer& computer){
    Computers[numberOfComputers] = computer;
    numberOfComputers++;
}

void Store::printComputersByName(){
    int count=1;
    Computer temp;
    if(numberOfComputers>1){
        for (int i = 0; i < numberOfComputers; ++i) {
            for (int j = 0; j < numberOfComputers - i; ++j) {
                if (Computers[j].getManufacturer() > Computers[j + 1].getManufacturer()) {
                    temp = Computers[j];
                    Computers[j] = Computers[j + 1];
                    Computers[j + 1] = temp;
                }
            }
        }
    }
    cout<<"There are "<<numberOfComputers<<" computers in the store. The computers:"<<endl;
    while(count<=numberOfComputers){
        cout<<"Computer "<<count<<endl;
        Computers[count-1].print();
        count++;
    }
}
void Store::printComputersByYear(){
    int count=1;
    Computer temp;
    if(numberOfComputers>1){
        for (int i = 0; i < numberOfComputers; ++i) {
            for (int j = 0; j < numberOfComputers - i; ++j) {
                if (Computers[j].getYear() > Computers[j + 1].getYear()) {
                    temp = Computers[j];
                    Computers[j] = Computers[j + 1];
                    Computers[j + 1] = temp;
                }
            }
        }
    }
    cout<<"There are "<<numberOfComputers<<" computers in the store. The computers:"<<endl;
    for (int i = 0; i < numberOfComputers; ++i) {
        cout<<"Computer "<<i+1<<":"<<endl;
        Computers[i].print();
    }
}