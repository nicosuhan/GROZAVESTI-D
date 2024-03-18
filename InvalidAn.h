//
// Created by csuha on 4/16/2024.
//

#ifndef OOP_INVALIDAN_H
#define OOP_INVALIDAN_H


class InvalidAn : public std::exception {
public:
    // Constructor care primește un mesaj și inițializează std::exception cu acest mesaj
    explicit InvalidAn() : std::exception() {}
};


#endif //OOP_INVALIDAN_H
