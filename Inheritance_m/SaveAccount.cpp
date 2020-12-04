//
// Created by User on 12/01/2020.
/// the whole idea is reuse the Father class with his function and his variables

#include "SaveAccount.h"
#include <iostream>

using namespace std;


SaveAccount::SaveAccount() : id{get_id()}, save_account_money{0.0} {
    cout << "Save account :" << id << " created" << endl;
}

void SaveAccount::s_deposit(double n) {
//    this method will use Account deposit variables for him self
    Account::deposite(n);
}

void SaveAccount::show() {
    cout << "this is money in save account : " << Account::get_money() << endl;

}

ostream &operator<<(ostream &os, SaveAccount &saveAccount) {
    os << "save account id :" << saveAccount.id <<
       ", have money : " << saveAccount.save_account_money << endl;
    return os;
}



