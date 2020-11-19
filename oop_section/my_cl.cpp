//
// Created by User on 11/19/2020.
//

#include <iostream>
#include <vector>

using namespace std;

class Person {
    string name;
    int age;

    void speak() {
        cout << " my name is " << name << endl;
        cout << " my age is " << age << endl;
    }
};