
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

/// declaration
int *create_arr(size_t size, int value = 0);

int *large_int(int *a, int *b);

void double_data(int *pnum);

void display(vector<string> *v);

/// use
void point_main() {
    cout << "pointers in cpp ==========================" << endl;
    // always init ptr to null
    int *pnum = nullptr;
    cout << "value : " << pnum << endl;
    cout << "size of  : " << sizeof(*pnum) << endl;
    cout << "address : " << &pnum << endl;


    /// memory from heap -----------------------------------
    cout << "\n **** allocating memory from heap : " << "\n";
    int *int_ptr{nullptr};
    int_ptr = new int; // allocating memory frm heap
    cout << int_ptr << "\n"; // got address on heap
    cout << *int_ptr << "\n";  // trash dta
    *int_ptr = 10; // init data at this location
    cout << *int_ptr << "\n";
    delete int_ptr; // free memory


    /// arr pointers  -----------------------------------
    cout << "\n array mem usage : ===============" << endl;
    int scores[]{1, 4, 2, 6, -1};
    cout << "score address : " << scores << endl;
    cout << "score first value : " << *scores << "\n\n";

    int *pscores{scores};
    cout << "pscore address : " << &pscores << endl;
    cout << "pscore value : " << pscores << endl;
    cout << "pscore points to [0]: " << *pscores << endl; // pscores[0]
    cout << "pscore [1]: " << pscores[1] << endl; // pscores[1]
    // after that value pointer was incrementer !
    cout << "pscore [1]: " << *(++pscores) << endl; // pscores[1]
    --pscores;
    cout << "is pscores == scores : " << ((pscores == scores) ? "yes" : "no") << endl;

    cout << "loop thru the pointers of array : " << endl;
    int *util = pscores;
    while (*util != -1) {
        // -1 as sentinel value
        cout << *util++ << " ";
    }
    cout << endl;


    /// string  -----------------------------------
    string s1{"one"};
    string s2{"one"};

    string *ps1 = &s1;
    string *ps2 = &s2;

    cout << "\n string comparison : ===========\n";
    cout << "*ps1 == *ps3 : " << (*ps1 == *ps2) << endl;
    cout << "ps1 == ps3 : " << (ps1 == ps2) << endl;


    /// const pointers  -----------------------------------

    int d1{50}, d2{50}, d3{50};

    const int *pd1{&d1};
//    *pd1 = 45; // error
    pd1 = &d2; // ok

    int *const pd2{&d2};
    *pd2 = 45; // ok
//    pd2 = &d1; // error  (pointer only got this value)

    const int *const pd3{&d3};
    // read only pointer !
//    *pd3 = 45;
//    pd3 = &d1;


    /// pointer to / from  function
    cout << "\nptr in functions : ================" << endl;
    int num = 4;
    double_data(&num);
    cout << "num : " << num;

    vector<string> myv{"hello", "world"};
    cout << "\nvector before func :" << myv.at(0) + " " + myv.at(1) << endl;
    display(&myv);


    int a{10}, b{20};
    int *large_num{nullptr};
    large_num = large_int(&a, &b);
    cout << "address b>a : " << &b << endl;
    cout << "10 ? 20 ...  : " << *large_num << endl;

    // return array space ( dynamic allocated space )
    int *arr = create_arr(50);
    cout << "\tarr address : " << arr << endl;

    for (int i = 0; i < 3; ++i) {
        cout << arr[i] << " ";
    }

    delete[]arr;  // release space !!!!
    cout << endl;

}

/// init
int *create_arr(size_t size, int value) {
    //    function return pointer to space that was allocated and filled with values
    //    this is not be a local variable !!! ( do not return local variable pointer )

    // create pointer
    int *storage = nullptr;

    try {
        // allocate space
        storage = new int[size];
        // fill space with values
        for (int i = 0; i < size; ++i) {
            *(storage + i) = value;
        }
        cout << "\n\tstorage address : " << storage << endl;
        return storage; // allocated filled space

    } catch (const std::exception &e) {
        cout << "some bew int[] pointer allocation problem ... " << endl;
    }

    return nullptr;
}

int *large_int(int *a, int *b) {
    return *a > *b ? a : b;
}

void double_data(int *pnum) {
    *pnum *= 2;
}

void display(vector<string> *v) {
    // convert strings in vector to upper case
    for (auto &i : *v) { // '&' reference in vector data
        cout << &i << " " + i << endl; // 'i' is alias for vector obj
        string st;
        for (auto c:i) {
            st.push_back((char) toupper(c));
        }
        i = st; // change reference !
    }

    cout << "vector after : " << v->at(0) << " " << v->at(1) << endl;
}




