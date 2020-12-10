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
