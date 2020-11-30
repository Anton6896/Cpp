//
// Created by Ant on 30/11/2020.
//

#include <iostream>
#include <utility>
#include "OperatorOverload_my.h"

using namespace std;

// init counter
int OperatorOverload_my::counter = 0;

OperatorOverload_my::OperatorOverload_my(string name_) : name{std::move(name_)} {
    counter++;
    cout << "name is : " << name << ", object number : " << counter << endl;
}
