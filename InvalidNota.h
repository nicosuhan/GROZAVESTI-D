//
// Created by csuha on 4/16/2024.
//

#ifndef OOP_INVALIDNOTA_H
#define OOP_INVALIDNOTA_H


class InvalidNota : public std::exception {
public:
    // Constructor care primește un mesaj și inițializează std::exception cu acest mesaj
    explicit InvalidNota() : std::exception() {}
};

#endif //OOP_INVALIDNOTA_H
