//
// Created by User on 11/15/2020.
//

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include <vector>
#include <typeinfo>

using namespace std;


void str_u1();

void str_2();

// by using pointer decries time *2
string encrypt_my(string *msg);

string decript_my(string *msg);

void my_msg(string *str);


int str_main() {
//    str_u1();
//    str_2();

    string msg;
    cout << "\nenter name for encryption : \n";
    cin >> msg;
    cout << "after encryption : " << encrypt_my(&msg) << endl;
    msg = encrypt_my(&msg);
    cout << "after decription : " << decript_my(&msg) << endl;

//    string my_str = "asdf";
//    my_msg(&my_str);

    return 0;
}

/// c style string  #include <cstring>
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


    /// c style ( contain '\0' ) -------------------------------------------
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

/// cpp string  #include <string>
void str_2() {
    string s1;
    string s2{"franck"};
    string s3{s2 + " other ."};
    // from pos 3 plus 6 chars after
    string s4{s3, 3, 7};
    // tuple create string of chars
    string s5(3, 'X');

    cout << "s2 : " << s2 << ", address: " << &s2 << "\ns3 : " << s3 << ", address: " << &s3 << endl;
    cout << "s4: " << s4;
    cout << "\ns5: " << s5;

    // from ASCII Table (A<a)
    cout << "\ncompare : a < b : " << (('A' < 'a') == 1 ? "true" : "false");

    cout << boolalpha;
    cout << "\nenable boolalpha : " << ('A' < 'a');

//    string s7 = "wo" + " at"  // error cant concat 2 c style strings

    cout << "\n";
    string s11 = "122312334324333123233";
    for (int i = 0; i < size(s11) - 1; ++i) {
        if (s11[i] != '3') {
            cout << s11[i] << " ";
        }
    }


//    find word in string
    string s12 = "new words for find words";
    int position = s12.find("for");
    if (position != string::npos) {
        cout << "\nword is found ! at position : " << position << endl;
    }


}


string encrypt_my(string *msg) {
    // stupid enctiptor add +1 to any char in string asii table
    string total;

    for (int i = 0; i < size(*msg); ++i) {
        // must be some complicated func to encrypt the value of this char
        total.push_back(static_cast<char>((static_cast<int>( msg->at(i) )) + 1));
    }
    return total;
}

string decript_my(string *msg) {
    // from encrypt_my decripting -1 to asii table
    string total;

    for (int i = 0; i < size(*msg); ++i) {
        // get function logic from encrypt_my
        total.push_back(static_cast<char>(static_cast<int>(msg->at(i)) - 1));
    }
    return total;
};

void my_msg(string *str) {
    for (int i = 0; i < size(*str); ++i) {
        cout << str->at(i) << ". ";
    }

}



