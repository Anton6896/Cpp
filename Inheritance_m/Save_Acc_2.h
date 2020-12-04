//
// Created by Ant on 04/12/2020.
//

#ifndef BASIC_SAVE_ACC_2_H
#define BASIC_SAVE_ACC_2_H

#include <iostream>
#include "Acc_2.h"


class Save_Acc_2 : public Acc_2 {
    friend std::ostream &operator<<
            (std::ostream &os, const Save_Acc_2 &saveAcc2);
private:
    static constexpr const char *def_name = "unnamed save account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_balance_rate = 0.05;  // 5% as default rate
protected:
    double int_rate;
public:
    explicit Save_Acc_2(std::string name_ = def_name, double balance_ = def_balance,
                        double int_rate_ = def_int_balance_rate);

    bool deposit(double sum_);
};


#endif //BASIC_SAVE_ACC_2_H
