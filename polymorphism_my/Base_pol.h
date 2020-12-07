//
// Created by User on 12/07/2020.
//

#ifndef BASIC_BASE_POL_H
#define BASIC_BASE_POL_H


class Base_pol {
public:
    void show_self() const;

    /*
     * virtual functions (dynamic bindings)
     * will use the function at the class that belongs to.
     * not from base class (will decide at the run time if any exist)
     * */
    void virtual show_dynamic();
};


#endif //BASIC_BASE_POL_H
