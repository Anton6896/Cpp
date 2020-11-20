#include <iostream>
#include <string>
#include <utility>

using namespace std;

// create test clas

class Car {
private:
    string name;
    int age;
public:
    explicit Car(string name_ = "name", int age_ = 0) : name{std::move(name_)}, age{age_} {
        cout << "car created : " << name << endl;
    }

    void show() const {
        cout << " age :" << age << endl;
    }

    ~Car() {
        cout << "car destructor called \n";
    }
};