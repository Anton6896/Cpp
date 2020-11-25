#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;

//#include "first/hello.cpp"
//#include "arr_and_vectors/arr_and_vec.cpp"
//#include "flow/my_fl.cpp"
//#include "string_my/str_my.cpp"
//#include "func_in_cpp/func.cpp"
//#include "pointer_my/pointer_main.cpp"
//#include "oop_section/oop_main.cpp"
#include "Inheritance_m/in_main.cpp"


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
    in_main();


    auto end = steady_clock::now();
    auto diff = end - start;
    cout << "\n\nprogram duration : " << chrono::duration<double, milli>(diff).count() << " ms" << endl;
    return 0;
}

