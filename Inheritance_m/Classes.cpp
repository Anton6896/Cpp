

#include <iostream>

using namespace std;

// static methods and vars must be initialized at the .h file
static auto acount_id = 0;
static auto person_id = 0;


class Account {
private:
    // not allowed to see
    int id;
protected:
    // class to subclass (for use)
    double amount;

    int show_id() {
        return id;
    }

public:
    Account(double sum = 0) : amount{sum}, id{++acount_id} {
        cout << "account created id :" << show_id() << endl;
    }

    // see to all
    void deposit(double sum) {
        amount += sum;
        cout << "balance : " << amount << endl;
    }

    void withdraw(double sum) {
        if (sum < amount) {
            amount -= sum;
            cout << "balance : " << amount << endl;
        } else {
            cout << "not enough money  : " << amount << endl;
        }
    }

    ~Account() {
        --acount_id;
    }
};

// using inheritance
class Save_Account : public Account {
private:
    double percent;
    int id = show_id();
    double amount = Account::amount * percent;

public:
    


};


class Person {
private:
    // using composition
    Account account;
    Save_Account save_account;
    int id = person_id;
public:


};