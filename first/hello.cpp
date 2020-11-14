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

void var_main() {

//    cout << "enter height nad width :" << endl;
//    double height, width;
//    cin >> height >> width;
//    cout << "room area " << (height * width) << endl;

    int mint = 1;
    unsigned int muint = 1; // >0
    double mdouble = 1.1;
    char mchar = 'c';
    string mstring = "mstring";
    bool mbool = true;
    long long mlong = 7'435'342;
    long double mlodo = 2.7e120;

    // regular sizing
    cout << "\nsizing of variables :\n";
    cout << "int: " << sizeof(mint) << endl;
    cout << "un signet int: " << sizeof(muint) << endl;
    cout << "char: " << sizeof(mchar) << endl;
    cout << "string: " << size(mstring) << endl; // return size of container
    cout << "long long (big int): " << sizeof(mlong) << endl;
    cout << "long double (super big): " << sizeof(mlodo) << endl;
    cout << "bool: " << sizeof(mbool) << "\n" << endl;


    unsigned int n1 = 1; // >0
    unsigned int n2 = 2; // >0
    int n3 = INT_MAX;
    cout << (n1 - n2) << endl; // return some positive num
    cout << "max int : " << n3 << endl;


}

int my_first_main() {
    cout << "firs things first :\n";
//    user_asq();
    var_main();
    return 0;
}