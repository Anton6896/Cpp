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
#include "my_classes/project_oop.cpp"


using namespace std;

void display_car(Car c);

/// main ________________________________________________________
void oop_main() {
    cout << "oop main function start : " << endl;

    cout << "\ncrete use classes ------------------------------ \n";
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
//    Car car1("car 1"), car2("car 2", 43);
//    Car *car3 = new Car;
//    car3->set_car_name("car3");
//    car3->set_car_age(34);
//    display_car(*car3);
//    delete car3;

    cout << "\ndeep copy constructor------------------------------ \n";
    // always use the deep copy to prevent the errors
    Deep de1{100};
    de1.show_data_address();
    de1.set_data_value(1000);

    Deep obj2{de1};
    obj2.show_data_address();
    obj2.set_data_value(500);

    cout << "\n move constructor ------------------------------ \n";
    // using L_value
//    Move_my m1{100};
//    m1.show_address();
//    m1.set_data(20);
//    Move_my m2{m1};
//    m2.show_address();

    // using move address R_value
//    vector<Move_my> vm;
//    vm.emplace_back(Move_my(10));
//    vm.emplace_back(Move_my(20));
//    vm.emplace_back(Move_my(30));
//    vm.emplace_back(Move_my(40));

    cout << "\n const check ------------------------------ \n";
    // using the const method in classes ( on car obj )
//    const Car c1("car1", 23);
//    cout << "car name and age : " << c1.get_car_name() << " , " << c1.get_car_age() << endl;
    // but you can not set any thing because this is const obj === c1

//    Car c2;
//    c2.set_car_name("name 2").set_car_age(34);
//    cout << "car name and age : " << c2.get_car_name() << " , " << c2.get_car_age() << endl;



    cout << "\n finish project output ------------------------------ \n";

    Movies m1;
    m1.add_movie();
    m1.add_movie();
    m1.add_movie();
    m1.show_all();






}


/// init ________________________________________________________
void display_car(Car c) {
    // call to copy constructor
    cout << "age : " << c.get_car_age() << ", id : " << c.get_car_id() << " \n";
    cout << "name : " << c.get_car_name() << " \n";
}