//
// Created by User on 12/01/2020.
//

#ifndef BASIC_SAVEACCOUNT_H
#define BASIC_SAVEACCOUNT_H

#include "Account.h"


class SaveAccount : public Account {
    friend Account;
    friend std::ostream &operator<<(std::ostream &os, SaveAccount &saveAccount);
private:
    int id;
    double save_account_money;
public:
    SaveAccount();

    void s_deposite(double n);

    void show();

};


#endif //BASIC_SAVEACCOUNT_H
