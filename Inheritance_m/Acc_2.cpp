//
// Created by Ant on 04/12/2020.
//

#include "Acc_2.h"
#include <iostream>
#include <utility>

using namespace std;

std::ostream &operator<<(std::ostream &os, const Acc_2 &acc2) {
    os << "[account : " << acc2.name <<
       ", balance : " << acc2.balance << " ]" << endl;
    return os;
}

Acc_2::Acc_2(std::string name_, double balance_)
        : name{std::move(name_)}, balance{balance_} {

}

bool Acc_2::deposit(double sum_) {
    balance += sum_;
    return true;
}

bool Acc_2::withdraw(double sum_) {
    if (balance > sum_) {
        balance -= sum_;
        return true;
    } else {
        cout << "insufficient founds " << endl;
        return false;
    }
}

double Acc_2::get_balance() const {
    return balance;
}
