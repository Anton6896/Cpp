//
// Created by Ant on 09/12/2020.
//

#include "Smart_Ptr_tester.h"
#include <iostream>

using namespace std;

std::ostream &operator<<(std::ostream &os, const Smart_Ptr_tester &smartPtrTester) {
    os << "smart pointer tester class : \n";
    return os;
}

Smart_Ptr_tester::Smart_Ptr_tester(int data_) : data{data_} {
    cout << "smart test constructor [" << data << "]\n";
}

Smart_Ptr_tester::~Smart_Ptr_tester() {
    cout << "\tsmart test destructor [" << data << "]\n";
}

void Smart_Ptr_tester::show() {
    cout << "i am smart with data : [" << data << "]\n";
}
