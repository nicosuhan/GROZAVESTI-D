#ifndef OOP_MAIN_H
#define OOP_MAIN_H
#endif //OOP_MAIN_H
#pragma once
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>



class CaministErasmus : public caminist {
private:
    std::string tara_destinatie;
    std::string institutie_partenera;
    std::string durata_program;

public:
    explicit CaministErasmus(const std::string& nume_ = "S", int an_ = 1, float medie_ = 10, const std::string& specializare_ = "speci", const std::string& tara_destinatie_ = "Tara destinatie", const std::string& institutie_partenera_ = "Institutie partenera", const std::string& durata_program_ = "Durata program");

    void setTaraDestinatie(const std::string& tara);

    const std::string& getTaraDestinatie() const;

    void setInstitutiePartenera(const std::string& institutie);

    const std::string& getInstitutiePartenera() const;

    void setDurataProgram(const std::string& durata);

    const std::string& getDurataProgram() const;

    void afisareDetalii() const;

    CaministErasmus(const CaministErasmus& other);

    CaministErasmus& operator=(const CaministErasmus& other);
};


class ClasaDerivataConcreta : public ClasaDerivata {
public:
    void functie_speciala()  {}
};

class ClasaTestareDowncasting : public caminist {
public:
    ClasaTestareDowncasting(const std::string& nume_ = "S", int an_ = 1, float medie_ = 10, const std::string& specializare_ = "speci")
            : caminist(), nume(nume_), an(an_), medie(medie_), specializare(specializare_) {}

    void functieTest();

private:
    std::string nume;
    int an;
    float medie;
    std::string specializare;
};
