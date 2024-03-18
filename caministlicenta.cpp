//
// Created by csuha on 4/16/2024.
//

#include "CaministLicenta.h"

// Copy constructor definition
CaministLicenta::CaministLicenta(const CaministLicenta& other)
        : Caminist(other), tema_licenta(other.tema_licenta), sustinere_orala(other.sustinere_orala), profesor_coordonator(other.profesor_coordonator) {}

// Assignment operator definition
CaministLicenta& CaministLicenta::operator=(const CaministLicenta& other) {
    if (this != &other) { // Check for self-assignment
        // Assign base class members
        Caminist::operator=(other);

        // Assign derived class members
        tema_licenta = other.tema_licenta;
        sustinere_orala = other.sustinere_orala;
        profesor_coordonator = other.profesor_coordonator;
    }
    return *this;
}

CaministLicenta::CaministLicenta(const std::string& nume, int an, float medie, const std::string& specializare,
                                 const std::string& tema_licenta, bool sustinere_orala,
                                 const std::string& profesor_coordonator)
        : Caminist(nume, an, medie, specializare), tema_licenta(tema_licenta),
          sustinere_orala(sustinere_orala), profesor_coordonator(profesor_coordonator) {}



