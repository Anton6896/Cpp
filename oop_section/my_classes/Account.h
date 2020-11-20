//
// Created by User on 11/19/2020.
/** in h file you declare all class data and his attribute functions */

#ifndef DEMO_ACCOUNT_H
#define DEMO_ACCOUNT_H

/// declare class
class Account {
private:
    double balance;
public:
    void set_balance(double sum);
    double get_ballance();
};


#endif //DEMO_ACCOUNT_H
