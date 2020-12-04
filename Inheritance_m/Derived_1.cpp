//
// Created by Ant on 02/12/2020.
//

#include "Derived_1.h"
#include <iostream>

using namespace std;

Derived_1::Derived_1() : double_number{0} {
    cout << "Derived:: constructor empty Derived" << endl;
}

/// for get involved the appropriate base
/// constructor you must cal it explicit -->> Base_1(num)
Derived_1::Derived_1(int num)
        : double_number{num * 2}, Base_1(num) {
    cout << "Derived:: constructor with num " << (double_number) << endl;

}

Derived_1::~Derived_1() {
    cout << " --- Derived:: destructor" << endl;

}

Derived_1::Derived_1(const Derived_1 &other)
        : Base_1(other), double_number{other.double_number} {
    cout << "Derived :: copy constructor that enable the base ! " << endl;
}

Derived_1 &Derived_1::operator=(const Derived_1 &other) {
    if (this != &other) {
        // init the base part of me
        Base_1::operator=(other);
        // init my self
        double_number = other.double_number;
        return *this;
    }
    return *this;
}

void Derived_1::show() {
    cout << "Derived:: i am " << endl;
}
