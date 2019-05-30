/* 
 * File:   dicerole.cpp
 * Author: neeraj kaberpanthi
 * 
 * Created on 29 May, 2019, 11:59 AM
 */

#include "dicerole.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
//#include <conio.h>
//#include <dos.h>
using namespace std;

dicerole::dicerole() {
    srand(time(0));
    for(int i=1; i<=20; i++){
        cout << (rand()%6)+1 << endl;
    }
}

dicerole::dicerole(const dicerole& orig) {
}

dicerole::~dicerole() {
}

