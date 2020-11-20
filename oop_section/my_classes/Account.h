//
// Created by User on 11/19/2020.
/** in h file you declare all class data and his attribute functions */

#ifndef DEMO_ACCOUNT_H
#define DEMO_ACCOUNT_H

#include <string>
#include <utility>

static int counter = 1;

class Account {  /// declare class
private:
    double balance = 0.0;
    std::string name;
    int id = counter;
public:
    Account() : name{"None"} {
        // empty
    }

    // constructor init list , this is the right way to create !
    Account(string n)
    // init
            : name{std::move(n)}, balance{0.0} {
        // body
        cout << "account created : " << id << endl;
        counter++;
    }

    // declare in line :
    void set_balance(double sum) { balance += sum; }

    [[nodiscard]] double get_ballance() const { return balance; }

    string get_name() { return name; }

    void set_name(std::string n) { name = std::move(n); }

    /*
     * some why my .cpp cant load in this scenario
     * i cant transfer logic to other .cpp file (on this machine)
     *
     * */

    bool withdraw_1(double amount) {
        if (amount < balance) {
            balance -= amount;
            return true;
        } else {
            cout << "no money ..." << endl;
            return false;
        }
    }

    void show();

    ~Account() {
        cout << "account: " << id << " - destroyed" << endl;
        counter--;
    }

};


#endif //DEMO_ACCOUNT_H
