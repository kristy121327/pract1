#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <clocale>

#include "Data.h"
#include "Nedv.h"

using namespace std;


void vvod(ifstream& ist, vector <Nedv>& nedvs) {
    while (false == ist.eof()){
        Nedv nedv;
        ist >> nedv;
        nedvs.push_back(nedv);
    }
}

void vivod(vector <Nedv> nedvs) {
    for (Nedv nedv : nedvs){
        cout << nedv;
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    ifstream ist("in.txt");
    vector <Nedv> nedvs;

    vvod(ist, nedvs);
    vivod(nedvs);

    return 0;
}