//
// Created by User on 12/07/2020.
//

#ifndef BASIC_DERIVED_POL_2_H
#define BASIC_DERIVED_POL_2_H

#include "Base_pol.h"

class Derived_pol_2 : public Base_pol {

    /*!!
     * the override key
     * help to prevent REDEFINE the function !
     * */
    void show_dynamic() override;

    void one_for_all() override;
};


#endif //BASIC_DERIVED_POL_2_H
