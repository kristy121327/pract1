#include "Data.h"
#include <iostream>
#include <fstream>

using namespace std;

ifstream& operator >> (ifstream& ist, Data& data) {
     ist >> data.year;
     ist.get();
     ist >> data.month;
     ist.get();
     ist >> data.day;
     return ist;
}

ostream& operator<< (ostream& ost, Data& data) {
    ost << data.year << "." << data.month << "." << data.day;
    return ost;
    }