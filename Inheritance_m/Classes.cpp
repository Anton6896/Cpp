

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
        cout << "\taccount created id :" << show_id() << endl;
    }

    // see to all
    void deposit(double sum) {
        amount += sum;
        cout << "account :: deposit : " << amount << endl;
    }

    void withdraw(double sum) {
        if (sum < amount) {
            amount -= sum;
            cout << "account :: withdraw : " << amount << endl;
        } else {
            cout << "not enough money  : " << amount << endl;
        }
    }

    void add_to_amount(double sum = 0) {
        cout << "add to id :" << show_id() << " amount : " << sum << endl;
        amount += sum;
    }

    ~Account() {
        --acount_id;
    }
};

/// using inheritance
class Save_Account : public Account {
    // whole class is working not correctly , this is only for the learning practice !!!
private:
    double percent;
    int id;
    double amount;

public:
    Save_Account(double percent_ = 0.05)
            : percent{percent_}, id{show_id()}, amount{Account::amount * percent_} {
        cout << "\tsave account created : " << id << ", amount : " << amount << endl;
    }

    // overloading
    void deposit(double sum = 0.0) {
        amount = Account::amount * percent;
        cout << "save_account :: deposit " << amount << endl;
    }


};

/// using composition
class Person {
private:
    Account account;
    Save_Account save_account;
    int id = person_id;

public:


};


// control of what constructor is called and when
class A {
private:
    int number;
public:
    A() : number{0} {
        cout << "A : empty." << endl;
    }

    A(int num_) : number{num_} {
        cout << "A : with number ." << endl;
    }

    ~A() {
        cout << "A : destruct." << endl;
    }
};


class B : public A {
private:
    int num_b;
public:
    B() : A{}, num_b{1} {
        cout << "\tB : empty." << endl;
    }

    // init the base class with number + B with number
    // must say this explicitly
    B(int num) : A{num}, num_b{num * 2} {
        cout << "\tB : with number * 2." << endl;
    }

    ~B() {
        cout << "\tB : destruct." << endl;
    }
};


