//
// Created by Ant on 02/12/2020.
//

#include "Base_1.h"
#include <iostream>

using namespace std;

Base_1::Base_1() {
    cout << "Base :: constructor empty base" << endl;
}

Base_1::Base_1(int num_) : number{num_} {
    cout << "Base :: constructor with number " << number << endl;
}

Base_1::~Base_1() {
    cout << "Base :: destructor" << endl;

}
