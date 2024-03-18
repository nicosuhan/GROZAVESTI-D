//
// Created by csuha on 4/16/2024.
//

#ifndef OOP_CAMINISTMASTER_H
#define OOP_CAMINISTMASTER_H
#include <iostream>
#include "Caminist.h"
class CaministMaster : public Caminist {
private:
    std::string tema_dizertatie;
    int numar_articole;
    std::string domeniu_specializare;

public:
    explicit CaministMaster(const std::string& nume_ = "S", int an_ = 1, float medie_ = 10, const std::string& specializare_ = "speci", const std::string& tema_dizertatie_ = "Tema dizertatie", int numar_articole_ = 0, const std::string& domeniu_specializare_ = "Domeniu specializare");

    void setTemaDizertatie(const std::string& tema);

    const std::string& getTemaDizertatie() const;

    void setNumarArticole(int nr);

    int getNumarArticole() const;

    void setDomeniuSpecializare(const std::string& domeniu);

    const std::string& getDomeniuSpecializare() const;

    void afisareDetalii() const;

    CaministMaster(const CaministMaster& other);

    CaministMaster(const std::string &nume, int an, float medie, const std::string &specializare);

    explicit CaministMaster(const Caminist &other);

    CaministMaster& operator=(const CaministMaster& other);
};

#endif //OOP_CAMINISTMASTER_H
