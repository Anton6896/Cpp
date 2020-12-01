//
// Created by Ant on 30/11/2020.
//

#ifndef BASIC_OPERATOROVERLOAD_MY_H
#define BASIC_OPERATOROVERLOAD_MY_H

/// declare class functions here
class OperatorOverload_my {
private:
    static int counter;
    char *str; // C style string
    int id;
public:
    OperatorOverload_my();

    explicit OperatorOverload_my(const char *s);

    OperatorOverload_my(const OperatorOverload_my &other);

    ~OperatorOverload_my();

    void display() const;

    int get_length() const;

    int get_id() const;

    const char *get_str() const;

    // 'operator=' // copy assignment
    OperatorOverload_my &operator=(const OperatorOverload_my &other);

    // move operator
    OperatorOverload_my &operator=(OperatorOverload_my &&other);

};


#endif //BASIC_OPERATOROVERLOAD_MY_H
