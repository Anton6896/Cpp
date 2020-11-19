//
// Created by User on 11/19/2020.
//
#include <iostream>
#include <vector>
#include "my_cl.cpp"

using namespace std;


/// declare _____________________________________________________
// my_cl.cpp


/// main ________________________________________________________
void oop_main() {
    cout << "oop main function start : " << endl;

    MyPerson per1, per2;
    vector<MyPerson> person_vec{per1};  // with objects
    person_vec.emplace_back(per2);

    // access if public
    person_vec.at(0).name = "bob";
    person_vec.at(0).age = 33;
    person_vec.at(0).speak();
    cout << endl;

    auto *per1_ptr = new MyPerson;
    per1_ptr->name = "name in poiner";
    per1_ptr->age = 23;
    per1_ptr->speak();
    delete per1_ptr; // remove if no needed

    // nested class access
    cout << endl;
    auto *per2_ptr = new MyPerson;
    per2_ptr->name = "per2 name";
    per2_ptr->age = 34;
    per2_ptr->acc_prt->deposit(1000);
    per2_ptr->acc_prt->deposit(200);
    per2_ptr->acc_prt->withdraw(100);
    per2_ptr->speak();

    cout << endl;
    auto *per3_ptr = new MyPerson;
    per3_ptr->name = "per3 name";
    per3_ptr->age = 20;
    per3_ptr->acc_prt->deposit(600);
    per3_ptr->acc_prt->deposit(200);
    per3_ptr->acc_prt->withdraw(100);
    per3_ptr->speak();

    delete per2_ptr;
    delete per3_ptr;

    cout << "\nok ..";
}


/// init ________________________________________________________