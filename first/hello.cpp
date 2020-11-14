#include <iostream>

using namespace std;

int user_asq() {
    // cpp will attach the int , double and string to var by it self 

    int num1, num2;
    cout << "enter your favorite numbers: " << endl;
    cin >> num1 >> num2; // chain insertion
    cout << "num 1: " << num1 << ", num 2: " << num2 << endl; // chain output


    return 0;
}

int my_first_main() {
    cout << "firs things first :\n";
    user_asq();
    return 0;
}