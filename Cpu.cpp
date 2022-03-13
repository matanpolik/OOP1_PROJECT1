//
// Created by Matan Polik on 10/03/2022.
//

#include "Cpu.h"

//---------------------setters----------------------------

void Cpu::setClockRate(const double& Scr){
    clockrate = Scr;
}
void Cpu::setManufacturer(const string& Smanufacturer){
    if(Smanufacturer.length() > 10){
        cout<<"manufacturer length is too long"<<endl;
    }
    else manufacturer = Smanufacturer;
}
void Cpu::setYear(const int& Syear){
    year = Syear;
}

//---------------------getters----------------------------

double Cpu::getClockRate() const{
    return clockrate;
}
string Cpu::getManufacturer() const{
    return manufacturer;
}
int Cpu::getYear() const{
    return year;
}

//---------------------other methods----------------------------

void Cpu::print(){
    cout<<"Cpu clockRate: "<<clockrate<<endl;
    cout<<"Cpu manufacturer: "<<manufacturer<<endl;
    cout<<"Cpu year: "<<year<<endl;
}