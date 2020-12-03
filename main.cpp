#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;


/// this is bad practice !!! but working ok
//#include "first/hello.cpp"
//#include "arr_and_vectors/arr_and_vec.cpp"
//#include "flow/my_fl.cpp"
//#include "string_my/str_my.cpp"
//#include "func_in_cpp/func.cpp"
//#include "pointer_my/pointer_main.cpp"
//#include "oop_section/oop_main.cpp"
//#include "Inheritance_m/in_main.cpp"
//#include "Operator_overload/oo_1.cpp"

/// this is how it must to be done
// in this case must provide the main.cpp and
// the your classes.cpp to run together in CMakeList

#include "Operator_overload/OperatorOverload_my.h"
#include "Inheritance_m/Person.h"
#include "Inheritance_m/Base_1.h"
#include "Inheritance_m/Derived_1.h"


/// declare testers
//void operator_overload_my_tester();
void inheritance_tester();


/// entry point
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
    inheritance_tester();


    auto end = steady_clock::now();
    auto diff = end - start;
    cout << "\n\nprogram duration : " <<
         chrono::duration<double, milli>(diff).count() <<
         " ms" << endl;
    return 0;
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

    SaveAccount s1, s2;
    s1.deposite(45.7);
    s1.s_deposite(23.5);
    cout << s1 << s2;



}

