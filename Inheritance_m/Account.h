//
// Created by User on 12/01/2020.
// testing the fried
//

#ifndef BASIC_ACCOUNT_H
#define BASIC_ACCOUNT_H




static int counter_id = 0;

class Account {
    friend class Foo;

private:
    int id;
    double account_money;

protected:
    int get_id() { return id; }

public:
    Account();

    void deposite(double n);

    bool withdraw(double n);

    void show();

};


#endif //BASIC_ACCOUNT_H
