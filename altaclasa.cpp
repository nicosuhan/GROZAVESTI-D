//
// Created by csuha on 4/16/2024.
//

#include "altaclasa.h"
#include <iostream>
// Constructor care apelează constructorul clasei de bază
altaclasa::altaclasa(const std::string& nume_, int an_, float medie_, const std::string& specializare_)
        : Caminist(), nume(nume_), an(an_), medie(medie_), specializare(specializare_) {}

// Metoda specifica clasei altaclasa
void altaclasa::functieTest() {
    std::cout << "Aceasta este o metoda specifica pentru altaclasa." << std::endl;

    // Folosirea dynamic_cast pentru a efectua downcasting-ul la altaclasa*
    altaclasa* ptr_testare = dynamic_cast<altaclasa*>(this);

    // Verificarea dacă downcasting-ul a fost reușit
    if (ptr_testare) {
        // Downcasting-ul a fost reușit, putem folosi pointerul pentru a accesa metodele specifice ale clasei altaclasa
        std::cout << "Downcasting-ul a fost reusit." << std::endl;
    } else {
        // Downcasting-ul a eșuat
        std::cerr << "Downcasting-ul la altaclasa a esuat!" << std::endl;
    }
}
