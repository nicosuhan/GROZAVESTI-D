//
// Created by csuha on 4/16/2024.
//

#ifndef OOP_CAMERA_H
#define OOP_CAMERA_H

#include <string>
#include "Caminist.h"
class camera {
private:
    Caminist coleg1;
    Caminist coleg2;
    int catistauincamera;
    int nrcamera;
    std::string aucursurimaine;

public:
    // Constructor explicit de inițializare
    explicit camera(const Caminist& coleg1_, const Caminist& coleg2_, int catistauincamera_, int nrcamera_, const std::string& aucursurimaine_);

    // Operatorul de inserție în flux pentru a afișa informații despre camera
    friend std::ostream& operator<<(std::ostream& os, const camera& ca);

    // Getteri
    const Caminist& getColeg1() const;
    const Caminist& getColeg2() const;
    const std::string& getAucursurimaine() const;

    // Returnează caministul cu media mai mare din cameră
    Caminist cinearemediamaimareincamera();

    // Verifică dacă mai este loc liber în cameră
    void estevreunlocliber();
};
#endif //OOP_CAMERA_H
