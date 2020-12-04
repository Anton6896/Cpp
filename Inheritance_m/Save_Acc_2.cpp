//
// Created by Ant on 04/12/2020.
//

#include "Save_Acc_2.h"
#include <iostream>

using namespace std;

Save_Acc_2::Save_Acc_2(std::string name_, double balance_, double int_rate_)
        : Acc_2(move(name_), balance_), int_rate{int_rate_} {
}

bool Save_Acc_2::deposit(double sum_) {
    // kind of logic for the save account
    // deposit ( ut using the Father class for data )
    sum_ += sum_ * int_rate;
    return Acc_2::deposit(sum_);
}

std::ostream &operator<<(std::ostream &os, const Save_Acc_2 &saveAcc2) {
    os << "[ save account  :" << saveAcc2.name <<
       " , balance : " << saveAcc2.balance <<
       ", interest rate :" << saveAcc2.int_rate << " ]" << endl;
    return os;
}
