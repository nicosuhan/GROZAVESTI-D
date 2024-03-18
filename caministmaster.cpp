//
// Created by csuha on 4/16/2024.
//

#include "caministmaster.h"

// Copy constructor definition
CaministMaster::CaministMaster(const CaministMaster& other)
        : Caminist(other), tema_dizertatie(other.tema_dizertatie), numar_articole(other.numar_articole), domeniu_specializare(other.domeniu_specializare) {}

// Assignment operator definition
CaministMaster& CaministMaster::operator=(const CaministMaster& other) {
    if (this != &other) { // Check for self-assignment
        // Assign base class members
        Caminist::operator=(other);

        // Assign derived class members
        tema_dizertatie = other.tema_dizertatie;
        numar_articole = other.numar_articole;
        domeniu_specializare = other.domeniu_specializare;
    }
    return *this;
}
CaministMaster::CaministMaster(const std::string& nume, int an, float medie, const std::string& specializare,
                               const std::string& tema_dizertatie, int numar_articole,
                               const std::string& domeniu_specializare)
        : Caminist(nume, an, medie, specializare), tema_dizertatie(tema_dizertatie),
          numar_articole(numar_articole), domeniu_specializare(domeniu_specializare) {}

