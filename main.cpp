#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;

#include "first/hello.cpp"
#include "arr_and_vectors/arr_and_vec.cpp"
#include "flow/my_fl.cpp"
#include "string_my/str_my.cpp"


int main() {
    auto start = steady_clock::now();
    cout << "main : \n";

    /// my functions
//    my_first_main();
//    av_main();
//    fl_main();
    str_main();


    auto end = steady_clock::now();
    auto diff = end - start;
    cout << "\n\nprogram duration : " << chrono::duration<double, milli>(diff).count() << " ms" << endl;
    return 0;
}

