//
// Created by User on 11/19/2020.
//
#include <iostream>
#include "Account.h"

/// implementing the account class methods
void Account::set_balance(double sum) {
    balance += sum;
}

double Account::get_ballance() {
    return balance;
}
