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
    void setYear(const int& Syear);
    void setColor(const string& Scolor);
    void setCpu(Cpu Scpu);
    void setIsLaptop(const bool& SisLaptop);

    string getManufacturer() const;
    int getYear() const;
    string getColor() const;
    Cpu getCpu();
    bool getIsLaptop() const;

    void print();
};



#endif //OOP1_PROJECT1_COMPUTER_H
