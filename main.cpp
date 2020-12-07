/*
 * Clion working in this case must provide the main.cpp and
 * the your classes.cpp to run together in CMakeList
 *
 * */
#include <iostream>
#include <chrono>
#include <vector>
#include <sstream>
#include <random>


using namespace std::chrono;
using namespace std;


#include "Operator_overload/OperatorOverload_my.h"
#include "Inheritance_m/Person.h"
#include "Inheritance_m/Base_1.h"
#include "Inheritance_m/Derived_1.h"
#include "Inheritance_m/Acc_2.h"
#include "Inheritance_m/Save_Acc_2.h"
#include "polymorphism_my/Base_pol.h"
#include "polymorphism_my/Derived_pol.h"
#include "polymorphism_my/Derived_pol_2.h"
#include "polymorphism_my/Shape_pol.h"
#include "polymorphism_my/Triangle_pol.h"

/// declare testers
//void operator_overload_my_tester();
//void inheritance_tester();

void polymorphism_tester();


/// entry point -----------------------------------------------------
int main() {
    auto start = steady_clock::now();
    {
/// my functions
//    my_first_main();
//    av_main();
//    fl_main();
//    str_main();
//    func_main();
//    point_main();
//    oop_main();
//    oo_main_my();
//    in_main();
    }


//    operator_overload_my_tester();
//    inheritance_tester();
    polymorphism_tester();


    {
        auto end = steady_clock::now();
        auto diff = end - start;
        cout << "\n\nprogram duration : " <<
             chrono::duration<double, milli>(diff).count() <<
             " ms" << endl;
    }

    return 0;
}

void polymorphism_tester() {
    cout << "polymorphism tester : --------------------------------\n";
    {
        Base_pol *b1 = new Derived_pol,
                b2,
                *b3 = new Derived_pol_2;
        // with static (as default) binding will return the Base::show_self()
        b1->show_self();    // declared as derived
        b2.show_self();     // base class


        b3->show_dynamic(); // using dynamic bindings
        b2.show_dynamic();  // from base class

        delete b1;
        delete b3;


        Base_pol *a1 = new Base_pol,
                *a2 = new Derived_pol,
                *a3 = new Derived_pol_2;
        // for ech class his own implementation of same method!
        a1->one_for_all();
        a2->one_for_all();
        a3->one_for_all();


        delete a1;
        delete a2;
        delete a3;
    }


    // abstract class shape
    {
        Shape_pol *s1 = new Triangle_pol;
        s1->draw();
        s1->rotate();
        delete s1;
    }


}

void operator_overload_my_tester() {
    cout << " ----------- operator ----------- : " << endl;

//    OperatorOverload_my o1{"new one "}, o2, o3{o1};
//    o2.display();
//    o2 = o1;
//    o2.display();

    // using move assignment
    cout << "\nmove assisment : " << endl;
    OperatorOverload_my o4;
    o4 = OperatorOverload_my("nest");
    o4.display();


    cout << " \n\n";
}

void inheritance_tester() {
    cout << "________________  inheritance tester _________________" << endl;
//    Person p1;
//    p1.deposite(500);
//    p1.save_daposite(200);
//    p1.show();

    cout << "________________  base and derived tester _________________" << endl;
//    Base_1 b1, b2(3);
//    Derived_1 d1{100};
//    Derived_1 d2{d1}, d3; // copy constructor
//    d3 = d2;  // copy assignment


//    Base_1 *obj = new Derived_1;
//    obj->show(); // base obj called

//    Account a1;
//    a1.deposite(45);
//    cout << a1;

//    SaveAccount s1;
//    s1.s_deposit(23.5);
//    s1.show();


    cout << "________________  end tester _________________" << endl;

    vector<Acc_2 *> v1;

    // create random double
    double lower_bound = 3000;
    double upper_bound = 10000;
    uniform_real_distribution<double> unif(lower_bound, upper_bound);
    default_random_engine re;

    // fill vector for testing
    for (int i = 0; i < 4; ++i) {
        // string concat with standard library
        std::stringstream sstm;
        sstm << "acc num " << i;

        double amount = unif(re);

        v1.emplace_back(new Acc_2{sstm.str(), amount});

        cout << *(v1.at(i));
    }

    cout << "\n withdrow ::\n";

    // withdrow random data and show
    for (auto *a : v1) {
        cout << a->withdraw(345.65);
        cout << *a;
    }


    // free mem
    for (int i = 0; i < 4; ++i) {
        delete v1.at(i);
    }


}


