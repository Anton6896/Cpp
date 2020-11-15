//
// Created by User on 11/15/2020.
//

#include <iostream>
#include <cctype>
#include <cstring>


using namespace std;

void str_u1();


int str_main() {
    str_u1();
    return 0;
}


void str_u1() {

    auto text{
            "nim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea "
            "commodo consequat. Duis aute irure dolor in reprehenderit in voluptate "
            "velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat"
    };
    cout << "string functions :" << endl;


    cout << "isalpha() : " << isalpha('a') << endl;
    cout << "isdigit() : " << isdigit('1') << endl;
    cout << "ispunct() : " << ispunct(',') << endl;
    cout << "isspace() : " << isspace(' ') << endl;


    /// c style ( contain '\0' )
    char my_char[25];
    strcpy(my_char, "123456");
    cout << "\nctring, strcpy : " << my_char << ", len : " << strlen(my_char) << endl;


    char fname[50];
    char lname[50];
    char full_name[100];
    char tmp[50];

    cout << "enter full name ...\n";
    cin.getline(full_name, 50);

    strcpy(tmp, full_name);

    for (size_t i{0}; i < strlen(full_name); ++i) {
        if (isalpha(full_name[i])) {
            full_name[i] = toupper(full_name[i]);
        }
    }

    cout << "\nfull name :" << full_name;
    // after toupper return 1
    cout << "\ncheck for strcmp : " << strcmp(tmp, full_name);


}
