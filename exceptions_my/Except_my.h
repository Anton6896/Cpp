//
// Created by Ant on 10/12/2020.
//

#ifndef BASIC_EXCEPT_MY_H
#define BASIC_EXCEPT_MY_H


class Except_my {
private:

public:
    // my functions for testing
    double calculate_kpl(int km=0, int l=1);
    double calculate_kpl_cl(int km=0, int l=1);

    // class exception
    void zero_division_text() const;
};


#endif //BASIC_EXCEPT_MY_H
