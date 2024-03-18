//
// Created by csuha on 4/16/2024.
//

#include "clasaderivata.h"

// Constructor
ClasaDerivata::ClasaDerivata(const std::string& nume_, int an_, float medie_, const std::string& specializare_, Caminist* ptr)
        : Caminist(nume_, an_, medie_, specializare_), ptr_caminist(ptr) {}

// Destructor
ClasaDerivata::~ClasaDerivata() {
    delete ptr_caminist; // Eliberăm memoria alocată pentru obiectul de tip Caminist
}

// Constructor de copiere
ClasaDerivata::ClasaDerivata(const ClasaDerivata& other)
        : Caminist(other), ptr_caminist(nullptr) {
    if (other.ptr_caminist != nullptr) {
        ptr_caminist = other.ptr_caminist->clone();
    }
}

// Operator de atribuire
ClasaDerivata& ClasaDerivata::operator=(const ClasaDerivata& other) {
    if (this != &other) {
        Caminist::operator=(other); // Apelăm operatorul de atribuire al clasei de bază

        // Ștergem obiectul existent de tip Caminist și creăm unul nou prin clonare
        delete ptr_caminist;
        ptr_caminist = nullptr;
        if (other.ptr_caminist != nullptr) {
            ptr_caminist = other.ptr_caminist->clone();
        }
    }
    return *this;
}

// Metoda pentru a seta pointerul către un obiect de tip Caminist
void ClasaDerivata::setPtrCaminist(Caminist* ptr) {
    ptr_caminist = ptr;
}

// Metoda pentru a prezenta informații despre obiectul ClasaDerivata
void ClasaDerivata::prezinta_te() {
    Caminist::prezinta_te(); // Apelăm metoda din clasa de bază pentru a afișa informațiile despre clasa de bază
    if (ptr_caminist != nullptr) {
        std::cout << "De asemenea, sunt asociat cu Caministul:\n" << *ptr_caminist << std::endl;
    }
}

// Implementarea funcției virtuale pure
void ClasaDerivata::functie_speciala() {
    // Implementarea specifică pentru ClasaDerivata
    std::cout << "Implementare specifică pentru ClasaDerivata." << std::endl;
}

// Operatorul de egalitate
bool ClasaDerivata::operator==(const ClasaDerivata& rhs) const {
    // Implementarea logicii de comparare a doi obiecte ClasaDerivata
}

// Operatorul de comparare <
bool ClasaDerivata::operator<(const ClasaDerivata& rhs) const {
    // Implementarea logicii de comparare a doi obiecte ClasaDerivata
}

