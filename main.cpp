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

/// declare testers
void operator_overload_my_tester();


/// entry point
int main() {
    auto start = steady_clock::now();


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


    operator_overload_my_tester();


    auto end = steady_clock::now();
    auto diff = end - start;
    cout << "\n\nprogram duration : " << chrono::duration<double, milli>(diff).count() << " ms" << endl;
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

