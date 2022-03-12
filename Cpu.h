//
// Created by Matan Polik on 12/03/2022.
//

#ifndef OOP1_PROJECT1_CPU_H
#define OOP1_PROJECT1_CPU_H

#include <iostream>
#include <string>
#include <utility>

using std::string;
using std::cout;
using std::endl;

class Cpu {
    double clockrate;
    string manufacturer;
    int year;

public:
    Cpu(double clockrate = 0, string  manufacturer = "~", int year = 0) : clockrate(clockrate), manufacturer(std::move(manufacturer)), year(year){}

    void setClockRate(const double& Scr);
    void setManufacturer(const string& Smanufacturer);
    void setYear(const int& Syear);

    double getClockRate() const;
    string getManufacturer() const;
    int getYear() const;

    void print();


};

#endif //OOP1_PROJECT1_CPU_H
