//
// Created by Ant on 20/11/2020.
//
#include <iostream>
#include <string>
#include <utility>

using namespace std;

static int player_counter = 1;

class FriendOfPlayer;

class Player {
    friend class FriendOfPlayer;

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

    int show_id() const {
        return id;
    }

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

class FriendOfPlayer {
private:
    int f_id;
    string f_name;
public:
    int getFId() const {
        return f_id;
    }

    FriendOfPlayer(int fId = -1, string fName = "none") : f_id(fId), f_name(std::move(fName)) {
        cout << "friend created of player "  << endl;
    }

    void setFId(int fId) {
        f_id = fId;
    }

    void setFName(const string &fName) {
        f_name = fName;
    }

    const string &getFName() const {
        return f_name;
    }
};