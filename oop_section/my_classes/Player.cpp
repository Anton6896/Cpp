//
// Created by Ant on 20/11/2020.
//
#include <iostream>
#include <string>
#include <utility>

using namespace std;

static int player_counter = 1;

class Player {

private:
    std::string name;
    int age;
    bool status;
    int id = player_counter;
    double balance{};

public:
    // you can use the bigger constructor for delegation :
    Player(string name_, int age = 0, bool boo = false) :
            name{std::move(name_)}, age{age}, status{boo} {
        cout << "player created , id :" << id << endl;
        player_counter++;
    }

    // Delegating constructor from bigger one ^
    Player() : Player{"none", 0, false} {
        // !!! will execute the delegation from constructor body !!!
    }

    void speak() {
        cout << "name " << name << ", years " << age << " old ." << endl;
    }

    void status_check() const {
        cout << "status : " << (status ? "is ok " : "is not ok") << endl;
    }

    void set_balance(double sum);

    [[nodiscard]] double get_balance() const;


    ~Player() {
        player_counter--;
    }
};

void Player::set_balance(double sum) {
    balance += sum;
}

double Player::get_balance() const {
    return balance;
}