#include <iostream>
#include <fstream>

#ifndef DATE_H
#define DATE_H

using namespace std;

struct Data
{
    int day;
    int month;
    int year;
};

ifstream& operator >> (ifstream& ist, Data& data);
ostream& operator << (ostream& ost, Data& data);

#endif // DATE_H