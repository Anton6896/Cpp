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
#include <memory>


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
#include "smart_ptr_my/Smart_Ptr_tester.h"
#include "exceptions_my/Except_my.h"

/// declare testers
//void operator_overload_my_tester();
//void inheritance_tester();

void polymorphism_tester();

void inner_poly_calls(vector<Base_pol *> &obj);

int smart_tester();

void exception_tester();


/// main -----------------------------------------------------
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
//    polymorphism_tester();
//    smart_tester();
    exception_tester();


    {
        auto end = steady_clock::now();
        auto diff = end - start;
        cout << "\n\nprogram duration : " <<
             chrono::duration<double, milli>(diff).count() <<
             " ms" << endl;
    }

    return 0;
}

/// End main ------------------------------------------------------

void exception_tester() {

//    this class will have all function (for learning / testing )
//    and will be costume exception as well
    Except_my em;

    double km_per_l;
    try {
        km_per_l = em.calculate_kpl(234, 3);
        cout << "program end " << km_per_l << endl;
    } catch (int &ex) {
        cerr << "zero dividing !\n";
    } catch (string &ex) {
        cerr << ex << endl;
    }




    // exception by classes
    try {
        km_per_l = em.calculate_kpl_cl(345, 0);
        cout << "class exception ::" << km_per_l << endl;
    } catch (const Except_my &ex) {
        ex.zero_division_text();
    }

    cout << " -> continue program  \n";


}


int smart_tester() {

    cout << "\nunique pointers ++++++++++++++++++++++++++++\n";
    {
        // tester for smart pointers (unique pointer)
        auto t1 = make_unique<Smart_Ptr_tester>(400);
        auto t2 = make_unique<Smart_Ptr_tester>(500);
        auto t3 = make_unique<Smart_Ptr_tester>();
        t1->show();

//    t3 = t2  error cand copy that
        t3 = move(t2); // its ok
        if (!t2) {
            cout << "t2 is nullptr\n";
        }
        t3->show();

//    using vectors
        vector<unique_ptr<Base_pol>> vec;
        vec.push_back(make_unique<Derived_pol>());
        vec.push_back(make_unique<Derived_pol_2>());
//    vec.at(0)->show_dynamic();
//    vec.at(1)->show_dynamic();

        for (auto const &obj : vec) {
            obj->show_dynamic();
        }
    } // clear memory

    cout << "\nshared pointers ++++++++++++++++++++++++++++\n";
    {
        // this is the way the Python is using his objects

        auto s1 = make_shared<Smart_Ptr_tester>(100);
        cout << "use count s1 : " << s1.use_count() << " \n";
        shared_ptr<Smart_Ptr_tester> s2{s1}; //!! can't do that in unique !!
        cout << "use count s2{s1} -> s1: " << s1.use_count() << " \n";
        cout << "use count s2: " << s2.use_count() << " \n";
        s1.reset();
        cout << "use count s1.reset() : " << s1.use_count() << " \n";
        cout << "use count s2: " << s2.use_count() << " \n";

        cout << "\nderived classes with shared pointers : \n";
        shared_ptr<Base_pol> b1 = make_shared<Derived_pol_2>();
        shared_ptr<Base_pol> b2 = make_shared<Derived_pol>();
        b1->show_dynamic();
        b2->show_dynamic();

        vector<shared_ptr<Base_pol>> vec_shared;
        vec_shared.push_back(make_shared<Derived_pol>());
        vec_shared.push_back(make_shared<Derived_pol_2>());
        cout << "\nlook form the vector :\n";
        for (auto const &obj : vec_shared) {
            obj->show_dynamic();
        }

    } // clear memory


    return 0;
}

void inner_poly_calls(vector<Base_pol *> &obj) {
    cout << "using an vector for all calls in one : \n";
    for (const auto p : obj) {
        p->one_for_all();
    }
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


        vector<Base_pol *> v1{
                new Base_pol,
                new Derived_pol,
                new Derived_pol_2
        };
        // all have an same method with different implementation
        inner_poly_calls(v1);

        delete v1.at(0);
        delete v1.at(1);
        delete v1.at(2);

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
        stringstream sstm;
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


