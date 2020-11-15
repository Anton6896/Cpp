//
// Created by User on 11/15/2020.
//

#include <iostream>
#include <vector>
#include <cmath>

void fl_s();

using namespace std;


int fl_main() {
    fl_s();
    return 0;
}

void fl_s() {
    cout << "control flow section : \n";
    int num;
    cout << "enter number : ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "num is 1";
            break;
        case (10) :
            cout << "num is 10";
            break;
        case 20:
            cout << "num is 20";
            break;
        default:
            cout << "default case";
            break;


    }

    cout << "\ncondition operator (ternary) : " << ((num > 10) ? "num > 10\n" : "num <= 10 \n");

    string name{"charly"};
    /// auto will automate the variable type for execution
    for (auto c :name) {
        cout << c << " ";
    }

    cout << "\n";
    vector<int> v1;
    v1.emplace_back(12);
    v1.emplace_back(1);
    v1.emplace_back(45);

    for (auto i:v1) {
        if (i == 1){
            // skip i=1
            continue;
        }
        cout << i << " ";
    }


}
