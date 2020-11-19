//
// Created by User on 11/19/2020.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int counter = 1;

class MyAccount {
//    MyPerson *person = new MyPerson; // connect to other class (insane)
    int id = counter++;
    double balance = 0.0;

public:
    bool deposit(double sum) {
        balance += sum;
        return true;
    }

    int get_id() {
        return id;
    }

    double get_balance() {
        return balance;
    };

    bool withdraw(double sum) {
        if (sum < balance) {
            balance -= sum;
        } else {
            cout << "no money" << endl;
            return false;
        }
        return true;
    };
};


class MyPerson {
public:
    string name = "name";
    int age = 10;
    MyAccount *acc_prt = new MyAccount;


    void speak() const {
        cout << " my name is " << name << endl;
        cout << " my age is " << age << endl;
        cout << " my balance is " << acc_prt->get_balance() << endl;
        cout << " my id is " << acc_prt->get_id() << endl;
    }


};


