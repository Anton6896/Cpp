//
// Created by User on 12/01/2020.
//

#include "Account.h"
#include <iostream>

using namespace std;

Account::Account(double amount_)
        : money_amount{amount_} {
    id = ++counter_id;
}

void Account::show_money() {
    cout << "account id: " << id << ", have an: " << money_amount << " money" << endl;
}

Account::~Account() {
    --counter_id;
}

void Account::add_money(double amount_) {
    money_amount += amount_;
}

bool Account::get_money(double amount_) {
    if (amount_ < money_amount) {
        money_amount -= amount_;
        return true;
    } else {
        cout << "no money" << endl;
        return false;
    }
}
