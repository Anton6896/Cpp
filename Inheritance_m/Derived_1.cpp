//
// Created by Ant on 02/12/2020.
//

#include "Derived_1.h"
#include <iostream>

using namespace std;

Derived_1::Derived_1() {
    cout << "Derived:: constructor empty Derived" << endl;

}

/// for get involved the appropriate base
/// constructor you must cal it explicit -->> Base_1(num)
Derived_1::Derived_1(int num)
        : double_number{num * 2}, Base_1(num) {
    cout << "Derived:: constructor with num " << (double_number) << endl;

}

Derived_1::~Derived_1() {
    cout << "Derived:: destructor" << endl;

}
