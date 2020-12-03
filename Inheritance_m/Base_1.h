//
// Created by Ant on 02/12/2020.
//

#ifndef BASIC_BASE_1_H
#define BASIC_BASE_1_H

class Base_1 {
private:
    int number;
public:
    Base_1();

    Base_1(int num_);

    ~Base_1();

    // reconfigure the assignment operator
    Base_1 &operator=(const Base_1 &rhs);

    void show();


};


#endif //BASIC_BASE_1_H
