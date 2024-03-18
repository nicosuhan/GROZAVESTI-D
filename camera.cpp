//
// Created by csuha on 4/16/2024.
//
#include <iostream>
#include "camera.h"
#include "Caminist.h"
// Constructor definition
camera::camera(const Caminist& coleg1_, const Caminist& coleg2_, int catistauincamera_, int nrcamera_, const std::string& aucursurimaine_)
        : coleg1(coleg1_), coleg2(coleg2_), catistauincamera(catistauincamera_), nrcamera(nrcamera_), aucursurimaine(aucursurimaine_) {}

// Operator<< definition
std::ostream& operator<<(std::ostream& os, const camera& ca) {
    os << "Camera: " << ca.nrcamera << std::endl
       << "Locatari: " << ca.coleg1.getNume() << ", " << ca.coleg2.getNume() << std::endl
       << "Numar locatari: " << ca.catistauincamera << std::endl
       << "Maine " << ca.aucursurimaine << " cursuri" << std::endl;
    return os;
}

// Getter definitions
const Caminist& camera::getColeg1() const {
    return coleg1;
}

const Caminist& camera::getColeg2() const {
    return coleg2;
}

const std::string& camera::getAucursurimaine() const {
    return aucursurimaine;
}

// Function definitions
Caminist camera::cinearemediamaimareincamera() {
    if (coleg1.getMedie() > coleg2.getMedie()) return coleg1;
    else return coleg2;
}

void camera::estevreunlocliber() {
    if (catistauincamera < 2) std::cout << "Este loc liber" << std::endl;
    else std::cout << "Nu mai avem locuri" << std::endl;
}