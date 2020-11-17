//
// Created by User on 11/15/2020.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void func_util_1();

void c_math_func();


///declare prototypes

void my_challenge(vector<int> &v);

unsigned long long factorial_rec(unsigned long long num);

unsigned long long fibonachi_rec(unsigned long long num);

double penny_save(int days, double penny = 0.01);

double penny_save_rec(int days, double penny = 0.01);


// add default value at the function param
void def_tax_rate(double price, double tax = 0.06);

// overloading the functions
int add_number(int num = 0);

double add_number(double num = 0.0);

// list to function
// ( in cpp func cant understand the size of array )
// c style ok int[7] ->>  ( size 6)
void show_me_list(const int arr[], const int *size);

// pass by reference
// ( just put the address of actual value
// at the param of function )
void change_me(int &num);

void change_me_2(int num); // nu will not be changed
// const can prevent the data loss and save time and space !
void look_in_vector(const vector<int> &v);

// static value in func
void show_static(int num);

// lambda  = inline cpp
inline int add_num(int a, int b) {
    return a + b;
}

/// main call
void func_main() {

//    c_math_func();

    cout << "functions : \n";
    def_tax_rate(70);

    // depends for data right function is have an action ( overloading working cpp )
    add_number(12);
    add_number(22.4);

    cout << "\nlist to function : =========================" << endl;
    int arr1[]{1, 2, 3, 4, 5};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    show_me_list(arr1, &size);

    cout << "\npass reference to function  : =========================" << endl;
    int num = 23, num2 = 23;
    change_me(num); // alies
    change_me_2(num2);
    cout << "nu is : " << num << endl;
    cout << "nu is : " << num2 << endl;

    vector<int> my_v{1, 2, 3, 4, 5};
    look_in_vector(my_v); // reference

    cout << "\n staic values   : =========================" << endl;
    show_static(30);
    show_static(40);


    // try to avoid them ! (price bigger binary file ) , very fast function call
    cout << "\ninline function call : " << add_num(100, 5) << endl;

    cout << "\nrecursion =================================" << endl;
    cout << "Factorial : " << factorial_rec(8) << endl; // 40320
    cout << "Fibonacci : " << fibonachi_rec(30) << endl; // 832040
    cout << "penny : " << penny_save(18) << endl; // 1310.72 n=18
    cout << "penny : " << penny_save_rec(18) << endl; // 1310.72 n=18

    cout << "\nfunction challenge :\n";
    // get vector address
    my_challenge(my_v);
}


/// implement functions

void my_challenge(vector<int> &v) {
    // ask user what to do with the vector (args reference of vector for manipulation )
    cout << "hello. please chose one of the options bellow : \n" <<
         "1. print vector \n2. add number \n3. display mean from numbers \n" <<
         "4. display smallest num \n5. quite ";
    double mynum = accumulate(v.begin(), v.end(), 0.0 / v.size());
    int choice = 0;
    do {
        cout << "\nenter your choice :";
        cin >> choice;
    } while (choice < 0 || choice > 5);

    switch (choice) {
        case 1:
            for (auto i : v) {
                cout << i << " ";
            }
            break;

        case 2:
            int n;
            cout << "\nenter number :";
            cin >> n;
            cout << "number: " << n << " , added to end of list .";
            v.emplace_back(n);
            break;

        case 3:
            // get mean from list
            cout << "The average is : " << mynum << endl;
            break;

        case 4:
            cout << "smallest num in list  :" << *min_element(v.begin(), v.end()) << endl;
            break;
        case 5:
            cout << " thx and bay ... ";
            break;
        default:
            break;
    }
}

double penny_save_rec(int days, double penny) {
    if (days == 1) return penny;
    return penny_save_rec(days - 1, penny * 2);
}

double penny_save(int days, double penny) {
    double p = penny;
    for (int i = 0; i < days - 1; ++i) {
        p *= 2;
    }
    return p;
}

unsigned long long fibonachi_rec(unsigned long long n) {
    if (n <= 1) return n;
    return fibonachi_rec(n - 1) + fibonachi_rec(n - 2);
}

unsigned long long factorial_rec(unsigned long long num) {
    //super big number
    if (num == 0) {
        return 1;
    }
    return num * factorial_rec(num - 1);
}

void show_static(int num) {
    // will retains it value between calls
    static int value{200};
    cout << "\nvalue is : " << value << "\n" <<
         "value + num : " << (value + num) << endl;
    value += num;
}

void look_in_vector(const vector<int> &v) {
    // get address and protect from the editing
    for (auto i: v) {
        cout << i;
    }
}

void change_me(int &num) {
    num = 50;
}

void change_me_2(int num) {
    num = 50;
}

void show_me_list(const int arr[], const int *size) {
    // arr already pointer to fist element ar list
    for (int i = 0; i < *size; ++i) {
        cout << arr[i] << " ";
//        arr[i] = 0;  // const protect arr for changes
    }
    cout << "\n";
}

int add_number(int num) {
    cout << "call from int func\n";
    return 0;
}

double add_number(double num) {
    cout << "call from double func\n";
    return 0.0;
}

void c_math_func() {
    cout << "exercise :  \n";
    double bill_total;
    int num_of_guests;
    cout << "enter num of guests and total bill : ";
    cin >> num_of_guests >> bill_total;

    cout << "math average : " << (bill_total / num_of_guests) << endl;
    cout << "math floor : " << floor(bill_total / num_of_guests) << endl;
    cout << "math round : " << round(bill_total / num_of_guests) << endl;
    cout << "math ceil : " << ceil(bill_total / num_of_guests) << endl;

}

void def_tax_rate(double price, double tax) {
    // function has an defaukt tax rate
    cout << "calculate price with tax : " << (price + (price * tax)) << endl;
}