//
// Created by csuha on 4/16/2024.
//

#ifndef OOP_INVALIDNRARTICOLE_H
#define OOP_INVALIDNRARTICOLE_H


class Invalidnrarticole : public std::exception {
public:
    // Constructor care primește un mesaj și inițializează std::exception cu acest mesaj
    explicit Invalidnrarticole() : std::exception() {}
};



#endif //OOP_INVALIDNRARTICOLE_H
