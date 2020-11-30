//
// Created by User on 11/23/2020.
//
#include <iostream>
#include <utility>


using namespace std;

class Movies;


class Film {
    friend class Movies;

private:
    int watched = 1;
    string name;
    enum raiting {
        g = 1, pg = 2, pg_13 = 3, r = 4
    };
public:

    Film(string name_ = "movie", raiting= g) :
            name{std::move(name_)} {
        cout << "movie :" << name_ << "is created" << endl;
    }

    Film() {}

    string get_name() const {
        return name;
    }

    int get_watched() const {
        return watched;
    }

    void update_watched() {
        ++watched;
    }

    int show_watched() const {
        return watched;
    }
};

class Movies {
private:
    vector<Film> film;

    void add_movie_util(const string &name_, Film::raiting r) {
        if (film.empty()) {
            film.emplace_back(Film(name_));
            cout << "movie added . " << endl;
        } else {
            for (auto m : film) {
                if (m.name == name_) {
                    // movie found
                    m.update_watched();
                    cout << "movie watched times updated ." << endl;
                } else {
                    // new movie
                    film.emplace_back(Film(name_));
                    cout << "movie added . " << endl;
                }
                cout << m.name << "  " << m.watched << endl;
            }
        }
    }

public:
    Movies() {
        cout << "created new movie collection " << endl;
    }


    void add_movie() {
        cout << "enter the movie name and rating (1-4) :";
        string name;
        Film::raiting r;
        int raiting;
        cin >> name;
        cin >> raiting;

        //g = 1, pg = 2, pg_13 = 3, r = 4
        switch (raiting) {
            case 1:
                r = Film::g;
                break;
            case 2:
                r = Film::pg;
                break;
            case 3:
                r = Film::pg_13;
                break;
            case 4:
                r = Film::r;
                break;
            default:
                r = Film::g;
                break;
        }
        add_movie_util(name, r);

    }

    void show_all() const {
//        for (int i = 0; i < film.size(); ++i) {
//            cout << i << ". name :" << film.at(i).get_name() << " , was watchrd :" <<
//                 film.at(i).show_watched() << " times ." << endl;
//        }
        for (auto &f : film){
            cout << f.name << " " << f.watched << endl;
        }
    }

};