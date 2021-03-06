/**
 * Created by User on 11/14/2020.
 * vectors and arrays (vector is better)
 *
 * */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void my_arr_1() {
    int arr_1[5]{
            1, 2, 3
    };

    int arr_2[]{
            1, 2, 3
    };

    // range for arr_1 (as in java)
    for (int i : arr_1) {
        cout << i << " ";
    }
    cout << "\n";
    for (int i:arr_2) {
        cout << i << " ";
    }

}

void my_vect_1() {
    /**
     * dynamic array ( vector object )
     * must include it as library
     * methods >>> sort, v.at(pos) , .emplace_back  ..., v1.insert(v1.begin() + 1, data)
     * namespace std::
     *
     * if trying to get vec[idx] and it out of index this will crash with no error !
     * instead use vec.at(idx) -> out of bound error providing !
     * */

    vector<int> v1{1, 2, 4, 5, 5, 6, 3, 6};
    v1.insert(v1.begin() + 1, 234);
    for (int i : v1) {
        cout << i << " ";
    }
    for (int i = 0; i < size(v1); ++i) {
        // just playing with ternary
        (v1.at(i) % 2 == 0) ? v1.at(i) *= 4 : i;
        i == 3 ? v1[3] = 100 : i;
    }
    cout << endl;
    for (int i : v1) {
        cout << i << " ";
    }


    vector<string> v2;
    cout << "\n";
    v2.emplace_back("hello"); // add to end
    v2.emplace_back(" world ");
    v2.insert(v2.begin(), "start : ");
    v2.insert(v2.end(), ": end \n");
    for (string s:v2) {
        cout << s;
    }

    // think about vector with pointers !!!! vector that holds classes
    struct Person {
        string name;
        int age;
    };
    Person p1{"ant", 34};
    Person p2{"kal", 45};

    vector<Person *> per; // pointers for Person
    per.emplace_back(&p1);
    per.emplace_back(&p2);

    cout << "\nvector with Struct :\n";
    // protect the data thru the pointer change !
    for (Person const *p: per) {
        cout << "name: " << p->name << endl;
        cout << "age" << p->age << endl;
    }

    vector<vector<int> *> nes_v;
    nes_v.emplace_back(&v1);
    cout << "from nested vector : ";
    for (int i: *nes_v.at(0)) {
        cout << i << " ";
    }

    /**
     * casting data
     * */

    double a{10.3};
    int b{34};
    cout << "double before casting : " << a << " , " << b << endl;
//    double ever = (double) b / 50;  // this is old style  (can cast char to int etc not save) old school
    double ever = static_cast<double>(b) / 50; // new style (save method)

    cout << "after : a " << (int) a << ", ever (double)int / int: " << ever << endl;


}


int av_main() {
//    my_arr_1();
    my_vect_1();
    return 0;
}
