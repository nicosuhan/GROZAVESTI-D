//
// Created by csuha on 4/16/2024.
//

#ifndef OOP_CAMINISTDOCTORAT_H
#define OOP_CAMINISTDOCTORAT_H
#include <iostream>
#include "Caminist.h"
class CaministDoctorat : public Caminist {
private:
    std::string tema_teza;
    bool publicare_stiintifica;
    std::string profesor_indrumator;

public:
    explicit CaministDoctorat(const std::string& nume_ = "S", int an_ = 1, float medie_ = 10, const std::string& specializare_ = "speci", const std::string& tema_teza_ = "Tema teza", bool publicare_stiintifica_ = false, const std::string& profesor_indrumator_ = "Profesor indrumator");

    void setTemaTeza(const std::string& tema);

    const std::string& getTemaTeza() const;

    void setPublicareStiintifica(bool publicare);

    bool getPublicareStiintifica() const;

    void setProfesorIndrumator(const std::string& profesor);

    const std::string& getProfesorIndrumator() const;

    void afisareDetalii() const;

    CaministDoctorat(const CaministDoctorat& other);

    CaministDoctorat(const std::string &nume, int an, float medie, const std::string &specializare);

    CaministDoctorat& operator=(const CaministDoctorat& other);
};

#endif //OOP_CAMINISTDOCTORAT_H
