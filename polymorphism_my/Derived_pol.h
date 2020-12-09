//
// Created by User on 12/07/2020.
//

#ifndef BASIC_DERIVED_POL_H
#define BASIC_DERIVED_POL_H

#include "Base_pol.h"

class Derived_pol : public Base_pol {
public:
    void show_self() const; // not an virtual in purpose!
    void one_for_all() override; // override instead of virtual
};


#endif //BASIC_DERIVED_POL_H
