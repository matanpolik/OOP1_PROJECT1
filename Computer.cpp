//
// Created by Matan Polik on 10/03/2022.
//

#include "Computer.h"

void Computer::setManufacturer(const string& Smanufacturer){
    if(Smanufacturer.length() > 10){
        cout<<"manufacturer length is too long";
    }
    else manufacturer = Smanufacturer;
}
void Computer::setYear(const int& Syear){
    year = Syear;
}
void Computer::setColor(const string& Scolor){
    color = Scolor;
}
void Computer::setCpu(Cpu Scpu){
    cpu = Scpu;
}
void Computer::setIsLaptop(const bool& SisLaptop){
    isLaptop = SisLaptop;
}

string Computer::getManufacturer() const{
    return manufacturer;
}
int Computer::getYear() const{
    return year;
}
string Computer::getColor() const{
    return color;
}
Cpu Computer::getCpu(){
    return cpu;
}
bool Computer::getIsLaptop() const{
    return isLaptop;
}
void Computer::print() {
    cpu.print();
    cout<<"Computer manufacturer: "<<manufacturer<<endl;
    cout<<"Computer year: "<<year<<endl;
    cout<<"Computer color: "<<color<<endl;
    cout<<"Computer is laptop: ";
    if(isLaptop) cout<<"True"<<endl;
    else cout<<"False"<<endl;

}