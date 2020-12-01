//
// Created by User on 12/01/2020.
//

#include "SaveAccount.h"
#include <iostream>

using namespace std;


SaveAccount::SaveAccount(double money_) : Account(money_), id{Account::get_id()} {
    cout << "save account created id:" << id << endl;
}

bool SaveAccount::add_money(double amount_) {
    if (Account::get_money(amount_)) {
        save_money_amount += amount_;
        return true;
    } else {
        cout << " cant do that on account have no money ! \n";
        return false;
    }
}

void SaveAccount::show_money() {
    cout << "SAVE vACCOUNT id: " << id << ", have an: " << save_money_amount << " money" << endl;

}
