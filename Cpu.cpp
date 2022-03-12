//
// Created by Matan Polik on 10/03/2022.
//

#include "Cpu.h"

void Cpu::setClockRate(double Scr){
    clockrate = Scr;
}
void Cpu::setManufacturer(const string& Smanufacturer){
    if(Smanufacturer.length() > 10){
        cout<<"manufacturer length is too long"<<endl;
    }
    else manufacturer = Smanufacturer;
}
void Cpu::setYear(int Syear){
    year = Syear;
}

double Cpu::getClockRate(){
    return clockrate;
}
string Cpu::getManufacturer(){
    return manufacturer;
}
int Cpu::getYear(){
    return year;
}

void Cpu::print(){
    cout<<"Cpu clockRathe: "<<clockrate<<endl;
    cout<<"Cpu manufacturer: "<<manufacturer<<endl;
    cout<<"Cpu year: "<<year<<endl;
}