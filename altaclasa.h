//
// Created by csuha on 4/16/2024.
//

#ifndef OOP_ALTACLASA_H
#define OOP_ALTACLASA_H

#include <iostream>
#include "Caminist.h"

class altaclasa : public Caminist {
public:
    // Constructor care apelează constructorul clasei de bază
    altaclasa(const std::string& nume_ = "S", int an_ = 1, float medie_ = 10, const std::string& specializare_ = "speci");

    // Metoda specifica clasei altaclasa
    void functieTest();

private:
    std::string nume;
    int an;
    float medie;
    std::string specializare;
};
#endif //OOP_ALTACLASA_H
