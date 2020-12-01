//
// Created by User on 12/01/2020.
//

#ifndef BASIC_SAVEACCOUNT_H
#define BASIC_SAVEACCOUNT_H

#include "Account.h"


class SaveAccount : public Account {
private:
    int id;  // same id as Account class
    double save_money_amount;
public:
    SaveAccount(double money_ = 0.0);
    bool add_money(double amount_ = 0.0);
    void show_money();
};


#endif //BASIC_SAVEACCOUNT_H
