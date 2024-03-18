//
// Created by csuha on 4/16/2024.
//

#ifndef OOP_CLASADERIVATA_H
#define OOP_CLASADERIVATA_H
#include <iostream>
#include "Caminist.h"

class ClasaDerivata : public Caminist {
private:
    Caminist* ptr_caminist;

public:
    // Constructor
    ClasaDerivata(const std::string& nume_ = "S", int an_ = 1, float medie_ = 10,const std::string& specializare_ = "speci", Caminist* ptr = nullptr);

    // Destructor
    ~ClasaDerivata();

    // Constructor de copiere
    ClasaDerivata(const ClasaDerivata& other);

    // Operator de atribuire
    ClasaDerivata& operator=(const ClasaDerivata& other);

    // Metoda pentru a seta pointerul către un obiect de tip Caminist
    void setPtrCaminist(Caminist* ptr);

    // Metoda pentru a prezenta informații despre obiectul ClasaDerivata
    void prezinta_te() override;

    bool operator==(const ClasaDerivata &rhs) const;

    bool operator<(const ClasaDerivata &rhs) const;
    virtual void functie_speciala();
};

#endif // CLASADERIVATA_H
