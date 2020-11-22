#include <iostream>
#include <string>


using namespace std;

static int car_counter = 1;

class Car {
private:
    string name;
    int age;
    int id = car_counter;

public:
    explicit Car(string name_ = "name", int age_ = 0) : name{std::move(name_)}, age{age_} {
        cout << "car id :" << id << " created <. \n";
        ++car_counter;
    }

    // return reference of this method
    Car &set_car_name(string name_) {
        // it will move the object string rather then copy it
        // cpp optimization
        name = move(name_);
        return *this; // for chain the code
    }

    Car &set_car_age(int age_) {
        age = age_;
        return *this;
    }

    [[nodiscard]] string get_car_name() const {
        return name;
    };

    [[nodiscard]] int get_car_id() const {
        return id;
    };

    [[nodiscard]] int get_car_age() const {
        return age;
    };

    ~Car() {
        cout << "car id :" << id << " deleted >. \n";
        car_counter--;
    }


    /// copy constructor
    Car(const Car &other) : Car{other.name, other.age} {
        cout << "copy created of id :" << this->id << "\n";
    }

    /// shallow copy (do NOT use the shall copy if you have an row_values  !!!!) use deap



};


class Deep {
private:
    int *data;
public:
    explicit Deep(int d) : data{new int{d}} {
//        data = new int; // allooc memory
//        *data = d;
    }

    void show_data_address() const {
        cout << "address : " << &data << " \n";
    }

    void set_data_value(int val) {
        *data = val;
        cout << "data modified \n";
    }

    // use delegating (copy constructor is moving the data for new one)
    Deep(const Deep &other) : Deep{*other.data} {
        cout << "deep constructor copy  \n";
    }

    //destructor
    ~Deep() {
        delete data; // free memory
    };
};


class Move_my {
    // the whole point that the l value is making deep copy and by using the r value
    // the constructor is moving the address of value from heap
    // ( so this is more efficient in some cases , still note sure )

private:
    int *data;
public:
    void set_data(int num) { *data = num; }

    int get_data() { return *data; }

    void show_address() {
        cout << "data address : " << &data << endl;
    }

    // constructor
    explicit Move_my(int d = 0) : data{new int{d}} {
        cout << "reg constructor for : " << d << endl;
    }

    // copy constructor L_value
//    Move_my(const Move_my &other) : Move_my{*other.data} {
//        cout << "copy for L_value, deep copy : " << *data << endl;
//    }

    // copy constructor R_value
    Move_my(Move_my &&other) : data{other.data} {
        other.data = nullptr;
        cout << "copy for R_value, moving resource : " << *data << endl;
    }

    // destructor
    ~Move_my() {
        cout << "(Move_my) : destructor called ." << endl;

        (data != nullptr) ?
        cout << "(Move_my) : free data for : " << *data << endl :
        cout << "(Move_my) : free nullptr " << endl;

        delete data;
    }

};


