
#include <iostream>

using namespace std;
/// declaration


/// use
void point_main() {
    cout << "pointers in cpp ==========================" << endl;
    // always init ptr to null
    int *pnum = nullptr;
    cout << "value : " << pnum << endl;
    cout << "size of  : " << sizeof(*pnum) << endl;
    cout << "address : " << &pnum << endl;

    cout << "\n **** allocating memory from heap : " << "\n";
    int *int_ptr{nullptr};
    int_ptr = new int; // allocating memory frm heap
    cout << int_ptr << "\n"; // got address on heap
    cout << *int_ptr << "\n";  // trash dta
    *int_ptr = 10; // init data at this location
    cout << *int_ptr << "\n";
    delete int_ptr; // free memory

    // arr pointers
    double *parr_1{nullptr};
    double arr[]{12.3, 32.5};
    parr_1 = arr;
    cout << (&arr) << endl;
    cout << (parr_1) << endl;


    delete parr_1; // deallocate memory


}

/// init


