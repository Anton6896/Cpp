//
// Created by User on 12/07/2020.
//

#ifndef BASIC_SHAPE_POL_H
#define BASIC_SHAPE_POL_H


/*
 * is an abstract class for all shapes
 * this class have only header file, have no implementation for its own
 *
 * by providing the pure virtual functions this class became an interface
 * cpp have no special key word for interface class (as Java)
 * */
class Shape_pol {
public:
    virtual void draw() = 0;

    virtual void rotate() = 0;

    virtual ~Shape_pol() = default;
};


#endif //BASIC_SHAPE_POL_H
