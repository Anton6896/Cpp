//
// Created by Ant on 24/11/2020.
//

#include <iostream>
#include <cstring> // strcpy

class MyString {
private:
    char *str; // c style string

public:
    MyString() : str{new char [1]} {
        *str = '\0';
    }

    // constructor allocate new place
    MyString(const char *s) : str{nullptr} {
        if (s == nullptr) {
            MyString(); // init empty C string
        } else {
            str = new char[strlen(s) + 1]; // crete place heap + '\0'
            strcpy(str, s); // copy data to new place
        }
    }

    // deep copy
    MyString(const MyString &source) : MyString{source.str} {

    }

    // clear heap
    ~MyString() { delete[] str; }

    // getters :
    void display() const {
        cout << "string : " << str << ", " << get_length() << endl;
    }

    int get_length() const {
        return strlen(str);
    }

    const char *get_str() const {
        return str;
    }
};