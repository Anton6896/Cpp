//
// Created by User on 12/01/2020.
//

#ifndef BASIC_ACCOUNT_H
#define BASIC_ACCOUNT_H

static int counter_id = 0;

class Account {
private:
    int id;
    double money_amount;

protected:
    int get_id() { return id; }

public:
    Account(double amount_ = 0);

    ~Account();

    void add_money(double amount_ = 0.0);

    bool get_money(double amount_ = 0.0);

    void show_money();
};


#endif //BASIC_ACCOUNT_H
