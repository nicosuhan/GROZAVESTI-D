//
// Created by csuha on 4/16/2024.
//
#include<iostream>
#include "palier.h"
// Constructor definition
palier::palier(const camera& camera1_, const camera& camera2_, const std::string& numee_, int nretaj_)
        : camera1(camera1_), camera2(camera2_), numee(numee_), nretaj(nretaj_) {}

// Operator<< definition
std::ostream& operator<<(std::ostream& os, const palier& p) {
    os << "Numar etaj: " << p.nretaj << std::endl
       << "Locatari: " << p.camera1.getColeg1().getNume() << ", "
       << p.camera1.getColeg2().getNume() << ", "
       << p.camera2.getColeg1().getNume() << ", "
       << p.camera2.getColeg2().getNume() << std::endl
       << "Numele etajului: " << p.numee;
    return os;
}

// Getter definitions
const camera& palier::getCamera1() const {
    return camera1;
}

const camera& palier::getCamera2() const {
    return camera2;
}

// Function definitions
void palier::dampetrcere() {
    if (camera1.getAucursurimaine() == "nu au" && camera2.getAucursurimaine() == "nu au")
        std::cout << "Se da petrecere la etajul " << nretaj << std::endl;
    else
        std::cout << "Ne culcam devreme ca maine avem cursuri " << std::endl;
}

void palier::sef_palier() {
    if (camera1.cinearemediamaimareincamera().getMedie() > camera2.cinearemediamaimareincamera().getMedie())
        std::cout << camera1.cinearemediamaimareincamera().getNume() << std::endl;
    else
        std::cout << camera2.cinearemediamaimareincamera().getNume() << std::endl;
}