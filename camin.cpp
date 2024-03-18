//
// Created by csuha on 4/16/2024.
//

#include "camin.h"
#include<iostream>
// Setter for nota
void camin::setNota(int nota) {
    if (nota < 0 or nota > 10)
        throw std::invalid_argument("Nota invalida");
    camin::nota = nota;
}

// Add a palier to the camin
void camin::add_palier(const palier& pal) {
    paliere.push_back(pal);
}

// Constructor definition
camin::camin(const std::string& numecamin_, int nota_, int nrloccamin_)
        : numecamin(numecamin_), nota(nota_), nrloccamin(nrloccamin_) {}

// Operator<< definition
std::ostream& operator<<(std::ostream& os, const camin& cam) {
    os << "Nume: " << cam.numecamin << std::endl
       << "Nota camin: " << cam.nota << std::endl
       << "Numar locatari: " << cam.nrloccamin;
    return os;
}

// Calculate and print the average media for the camin
void camin::media() {
    float total = 0;
    for (const palier& pal : paliere) {
        total += pal.getCamera1().getColeg1().getMedie();
        total += pal.getCamera1().getColeg2().getMedie();
        total += pal.getCamera2().getColeg1().getMedie();
        total += pal.getCamera2().getColeg2().getMedie();
    }

    std::cout << total / (9 * paliere.size());
}