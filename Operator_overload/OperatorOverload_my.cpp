//
// Created by Ant on 30/11/2020.
//

#include <iostream>
#include <utility>
#include "OperatorOverload_my.h"

using namespace std;

// init counter
int OperatorOverload_my::counter = 0;


OperatorOverload_my::OperatorOverload_my() : str{nullptr} {
    id = ++counter;
    cout << "created : id " << get_id() << endl;

}

OperatorOverload_my::OperatorOverload_my(const char *s)
        : OperatorOverload_my::OperatorOverload_my() {
    str = new char[strlen(s) + 1];
    strcpy(str, s);

}

// copy constructor
OperatorOverload_my::OperatorOverload_my(const OperatorOverload_my &other)
        : OperatorOverload_my::OperatorOverload_my(other.str) {
    cout << "deep copy called from : " <<
         other.get_id() << " > to : " << this->get_id() << endl;
}

void OperatorOverload_my::display() const {
    if (str == nullptr) {
        cout << "nullptr" << ", len is :" << get_length() <<
             ", obj id: " << get_id() << endl;
    } else {
        cout << str << ", len is :" <<
             get_length() << ", obj id: " << get_id() << endl;
    }
}

int OperatorOverload_my::get_length() const {
    if (str == nullptr) {
        return 0;
    }
    return strlen(str);
}

const char *OperatorOverload_my::get_str() const {
    return str;
}


OperatorOverload_my::~OperatorOverload_my() {
    delete[] str;
    cout << "deleted : " << get_id() << endl;
    counter--;
}

int OperatorOverload_my::get_id() const {
    return id;
}


/// copy assignment /// overloading "operator=" for this class ( pattern )
// Obj o1('txt_1'), o2('txt_2);
// o1 = o2; <- copy o2 to o1
OperatorOverload_my &OperatorOverload_my::operator=(const OperatorOverload_my &other) {
    cout << "using copy assignment ... " << endl;

    // if this is the same object address return self data
    if (this == &other) {
        return *this;
    }

    // clear my data space
    delete[] this->str;

    // copy other data to my data
    this->str = new char[strlen(other.str) + 1];
    strcpy(this->str, other.str);

    // chaining operator a=b=c
    return *this;
}


/// move assignment overriding
// Obj o1;
// o1 = Obj("text");  <- use move operator ( Obj("text") is r value )
OperatorOverload_my &OperatorOverload_my::operator=(OperatorOverload_my &&other) {
    cout << "using move assignment ... " << endl;

    if (this == &other) {
        return *this;
    }

    delete[] str;           // clear space from this str
    str = other.str;        // alias to location
    other.str = nullptr;    // clear previous pointing
    return *this;
}

OperatorOverload_my::OperatorOverload_my(OperatorOverload_my &&other)
        : str{other.str} {
    other.str = nullptr;
    cout << "using move constructor ... " << endl;
}

/// move constructor

