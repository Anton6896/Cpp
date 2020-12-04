//
// Created by User on 12/01/2020.
//

#include "SaveAccount.h"
#include <iostream>

using namespace std;


SaveAccount::SaveAccount() : id{get_id()}, save_account_money{0.0} {
    cout << "Save account :" << id << " created" << endl;
}

void SaveAccount::s_deposite(double n) {
    if (Account::withdraw(n)) {
        save_account_money += n;
    } else {
        cout << "cant save money" << endl;
    }

}

void SaveAccount::show() {
    Account::show();
    cout << "save acocunt " << save_account_money << "\n";
}

// __str__
ostream &operator<<(ostream &os, SaveAccount &saveAccount) {
    os << "save account id :" << saveAccount.id << ", have money : " << saveAccount.save_account_money << endl;
    return os;
}



