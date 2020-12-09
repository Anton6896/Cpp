//
// Created by User on 12/07/2020.
//

#include "Base_pol.h"
#include <iostream>

using namespace std;

void Base_pol::show_self() const {
    cout << "base class\n";
}

void Base_pol::show_dynamic() {
    cout << "Base:: dynamic\n";
}

void Base_pol::one_for_all() {
    cout << "\tBase:: one for all -\n";
}
