//
// Created by Ant on 04/12/2020.
//

#ifndef BASIC_ACC_2_H
#define BASIC_ACC_2_H

#include <iostream>
#include <string>

class Acc_2 {
    friend std::ostream &operator<<
            (std::ostream &os, const Acc_2 &acc2);

private:
    static constexpr const char *def_name = "unnamed account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Acc_2(std::string name_ = def_name, double balance_ = def_balance);
    bool deposit(double sum_);
    bool withdraw(double sum_);
    double get_balance() const;
};


#endif //BASIC_ACC_2_H
