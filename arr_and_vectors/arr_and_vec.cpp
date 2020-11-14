/**
 * Created by User on 11/14/2020.
 * vectors and arrays (vector is better)
 *
 * */

#include <iostream>
#include <vector>

using namespace std;


void my_arr_1() {
    int arr_1[5] = {
            1, 2, 3
    };

    int arr_2[] = {
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

void vect_1() {
    /**
     * dynamic array ( vector object )
     * must include it as library
     * methods >>> sort, v.at(pos) , .emplace_back  ..., v1.insert(v1.begin() + 1, data)
     * namespace std::
     * */

    vector<int> v1{1, 2, 4, 5, 5, 6, 3, 6};
    v1.insert(v1.begin() + 1, 234);
    for (int i : v1) {
        cout << i << " ";
    }
    for (int i = 0; i < size(v1); ++i) {
        if (v1.at(i) % 2 == 0) {
            v1[i] *= 4;
        }
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
    Person p1 = {"ant", 34};
    Person p2 = {"kal", 45};

    vector<Person *> per; // pointers for Person
    per.emplace_back(&p1);
    per.emplace_back(&p2);

    cout << "\nvector with Struct :\n";
    // protect the data thru the pointer change !
    for (Person const *p: per) {
        cout << "name: " << p->name << endl;
        cout << "age" << p->age << endl;
    }


}


int av_main() {
//    my_arr_1();
    vect_1();
    return 0;
}
