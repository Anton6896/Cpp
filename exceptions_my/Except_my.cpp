//
// Created by Ant on 10/12/2020.
//

#include "Except_my.h"
#include <iostream>
#include <string>

using namespace std;

double Except_my::calculate_kpl(int km, int l) {
    if (l == 0) {
        throw 0;
    } else if (km < 0 || l < 0) {
        throw string{"Negative value error"};
    }
    return static_cast<double>(km) / l;
}

double Except_my::calculate_kpl_cl(int km, int l) {
    if (l == 0) {
        // i am using same class for time save
        throw Except_my();
    }
    return static_cast<double>(km) / l;
}

void Except_my::zero_division_text() const {
    cout << "you can't divide by zero ! from Except_my class\n";
}
