//
// Created by Ant on 02/12/2020.
//

#include "Base_1.h"
#include <iostream>

using namespace std;

Base_1::Base_1() : number{0} {
    cout << "Base :: constructor empty" << endl;
}

Base_1::Base_1(int num_) : number{num_} {
    cout << "Base :: constructor with number " << number << endl;
}

Base_1::~Base_1() {
    cout << " --- Base :: destructor" << endl;

}

Base_1 &Base_1::operator=(const Base_1 &rhs) {
    if (this != &rhs) {
        number = rhs.number;
        cout << "Base:: overloaded copy assignment operator " << endl;
        return *this;
    }
    return *this;
}

void Base_1::show() {
    cout << "Base:: i am " << endl;
}

