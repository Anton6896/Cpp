//
// Created by User on 12/01/2020.
//

#include "Account.h"
#include <iostream>

using namespace std;



Account::Account() : id{++counter_id} {
    cout << "account :" << id << " created" << endl;

}

void Account::deposite(double n) {
    account_money += n;
}

bool Account::withdraw(double n) {
    if (account_money > n) {
        account_money -= n;
        return true;
    } else {
        cout << "account :: no money " << endl;
        return false;
    }
}

void Account::show() {
    cout << "account show :: " << account_money << " \n";
}




