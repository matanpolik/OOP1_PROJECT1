//
// Created by Matan Polik on 12/03/2022.
//

#ifndef OOP1_PROJECT1_COMPUTER_H
#define OOP1_PROJECT1_COMPUTER_H

#include <iostream>
#include <string>
#include <utility>
#include "Cpu.h"

using std::string;
using std::cout;
using std::endl;


class Computer {
    Cpu cpu;
    string manufacturer;
    int year;
    string color;
    bool isLaptop;

public:
    explicit Computer(Cpu& cpu, string manufacturer = "~", int year = 0, string color = "~", bool isLaptop = false) : cpu(cpu), manufacturer(std::move(manufacturer)), year(year), color(std::move(color)), isLaptop(isLaptop){}
    Computer(string manufacturer = "~", int year = 0, string color = "~", bool isLaptop = false) : manufacturer(std::move(manufacturer)), year(year), color(std::move(color)), isLaptop(isLaptop){}

    void setManufacturer(const string& Smanufacturer);
    void setYear(int Syear);
    void setColor(string Scolor);
    void setCpu(Cpu Scpu);
    void setIsLaptop(bool SisLaptop);

    string getManufacturer();
    int getYear();
    string getColor();
    Cpu getCpu();
    bool getIsLaptop();

    void print();
};



#endif //OOP1_PROJECT1_COMPUTER_H
