/**
 * declaration and implementation in cpp is in different files
 * from main.cpp including the declaration file .h files that
 * pointing to the implementation
 *
 * */

#include <iostream>
#include <vector>


/// declare _____________________________________________________
// this how to create and implement classes cpp
#include "my_classes/Account.h"

//#include "my_classes/my_cl.cpp"  // this is bad practice in cpp to create and use classes
#include "my_classes/Player.cpp"
#include "copy_constructor.cpp"

using namespace std;


/// main ________________________________________________________
void oop_main() {
    cout << "oop main function start : " << endl;

    /*
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
    auto *per3_ptr = new MyPerson;
    per3_ptr->name = "per3 name";
    per3_ptr->age = 20;
    per3_ptr->acc_prt->deposit(600);
    per3_ptr->acc_prt->deposit(200);
    per3_ptr->acc_prt->withdraw(100);
    per3_ptr->speak();
    delete per3_ptr;

    */
    {
        Account acc1("acc1");
        acc1.set_balance(2000);
        if (acc1.withdraw_1(200)) {
            cout << "withdraw ok ..\n";
        } else {
            cout << "withdraw noy ok ...\n";
        }
        acc1.set_name("other.");
        cout << "acc1 name: " << acc1.get_name() << ", balance: " << acc1.get_ballance() << endl;
//        acc1.show();
        // creating scope for force the destructor call
    }

    cout << endl;
    auto *acc2 = new Account("acc2");
    acc2->set_balance(1000);

    delete acc2;


    cout << "\n";
    Player pl1, pl2("mark", 34, true);
    pl1.speak();
    pl2.speak();
    pl2.status_check();
    pl2.set_balance(400);
    cout << "balance " << pl2.get_balance() << endl;

    cout << "\ncopy constructor------------------------------ \n";
    Car car1("car 1"), car2("car 2", 43);


    cout << "\nok ..\n";
}


/// init ________________________________________________________