//
// Created by User on 12/07/2020.
//

#ifndef BASIC_TRIANGLE_POL_H
#define BASIC_TRIANGLE_POL_H

#include "Shape_pol.h"

class Triangle_pol : public Shape_pol {
private:
    int size;
public:
    void draw() override;

    void rotate() override;

    ~Triangle_pol();

};


#endif //BASIC_TRIANGLE_POL_H
