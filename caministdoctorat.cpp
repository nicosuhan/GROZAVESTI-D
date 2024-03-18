//
// Created by csuha on 4/16/2024.
//

#include "caministdoctorat.h"

// Getter and setter definitions
void CaministDoctorat::setTemaTeza(const std::string& tema) {
    tema_teza = tema;
}

const std::string& CaministDoctorat::getTemaTeza() const {
    return tema_teza;
}

void CaministDoctorat::setPublicareStiintifica(bool publicare) {
    publicare_stiintifica = publicare;
}

bool CaministDoctorat::getPublicareStiintifica() const {
    return publicare_stiintifica;
}

void CaministDoctorat::setProfesorIndrumator(const std::string& profesor) {
    profesor_indrumator = profesor;
}

const std::string& CaministDoctorat::getProfesorIndrumator() const {
    return profesor_indrumator;
}

void CaministDoctorat::afisareDetalii() const {
    std::cout << "Nume: " << getNume() << ", An: " << getAn() << ", Medie: " << getMedie() << ", Specializare: "
              << getSpecializare() << ", Tema teza: " << tema_teza << ", Publicare stiintifica: "
              << (publicare_stiintifica ? "Da" : "Nu") << ", Profesor indrumator: " << profesor_indrumator
              << std::endl;
}


CaministDoctorat::CaministDoctorat(const CaministDoctorat& other)
        : Caminist(other), tema_teza(other.tema_teza),
          publicare_stiintifica(other.publicare_stiintifica),
          profesor_indrumator(other.profesor_indrumator) {}


CaministDoctorat& CaministDoctorat::operator=(const CaministDoctorat& other) {
    if (this != &other) { // Check for self-assignment
        // Assign base class members
        Caminist::operator=(other);

        // Assign derived class members
        tema_teza = other.tema_teza;
        publicare_stiintifica = other.publicare_stiintifica;
        profesor_indrumator = other.profesor_indrumator;
    }
    return *this;
}

// Constructor definition
CaministDoctorat::CaministDoctorat(const std::string& nume, int an, float medie, const std::string& specializare,
                                   const std::string& tema_teza, bool publicare_stiintifica,
                                   const std::string& profesor_indrumator)
        : Caminist(nume, an, medie, specializare), tema_teza(tema_teza),
          publicare_stiintifica(publicare_stiintifica), profesor_indrumator(profesor_indrumator) {}


