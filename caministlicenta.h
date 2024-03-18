#ifndef OOP_CAMINISTLICENTA_H
#define OOP_CAMINISTLICENTA_H

#include <iostream>
#include "Caminist.h"

class CaministLicenta : public Caminist {
private:
    std::string tema_licenta;
    bool sustinere_orala;
    std::string profesor_coordonator;

public:
    // Constructor
    explicit CaministLicenta(const std::string& nume = "S", int an = 1, float medie = 10, const std::string& specializare = "speci", const std::string& tema_licenta = "Tema licenta", bool sustinere_orala = false, const std::string& profesor_coordonator = "Profesor coordonator");

    // Getter and setter for tema_licenta
    void setTemaLicenta(const std::string& tema);
    const std::string& getTemaLicenta() const;

    // Getter and setter for sustinere_orala
    void setSustinereOrala(bool oral);
    bool getSustinereOrala() const;

    // Getter and setter for profesor_coordonator
    void setProfesorCoordonator(const std::string& profesor);
    const std::string& getProfesorCoordonator() const;

    // Member function to display details
    void afisareDetalii() const;

    // Copy constructor
    CaministLicenta(const CaministLicenta& other);

    // Assignment operator
    CaministLicenta& operator=(const CaministLicenta& other);

};

#endif // OOP_CAMINISTLICENTA_H
