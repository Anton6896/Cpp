//
// Created by Ant on 02/12/2020.
//

#ifndef BASIC_DERIVED_1_H
#define BASIC_DERIVED_1_H

#include "Base_1.h"


class Derived_1 : public Base_1 {
private:
    int double_number;
public:
    Derived_1();
    Derived_1(int num);
    ~Derived_1();
};


#endif //BASIC_DERIVED_1_H
