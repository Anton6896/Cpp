
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

    int num = 40;
    pnum = &num;
    cout << "data after pointer init : " << *pnum << endl;


}

/// init


