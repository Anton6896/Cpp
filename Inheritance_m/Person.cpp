//
// Created by User on 12/01/2020.
//

#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(std::string name_, int age_, double salary_)
        : name{move(name_)}, age(age_), salary{salary_} {
    cout << "person " << name << " created" << endl;

}

void Person::deposite(double n) {
    account.deposite(n);
}

void Person::save_daposite(double n) {
    account.s_deposit(n);
}

void Person::show() {
    account.show();
}




