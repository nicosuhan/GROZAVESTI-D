#ifndef OOP_CAMINIST_H
#define OOP_CAMINIST_H

#include <iostream>
#include "Prototype.h"

class Caminist : public Prototype {
private:
    std::string nume;
    int an;
    float medie;
    std::string specializare;

public:
    static int counter;

    explicit Caminist(const std::string& nume_="S", int an_=1, float medie_=10, const std::string& specializare_="speci")
            : nume{nume_}, an{an_}, medie{medie_}, specializare{specializare_} {
        counter++;
    }

    const std::string& getNume() const;
    void setNume(const std::string& nume);

    int getAn() const;
    void setAn(int an);

    float getMedie() const;
    void setMedie(float medie);

    const std::string& getSpecializare() const;
    void setSpecializare(const std::string& specializare);

    Caminist(const Caminist& other);

    explicit Caminist(const std::string& nume);

    Caminist& operator=(const Caminist& other);

    virtual ~Caminist();

    friend std::ostream& operator<<(std::ostream& os, const Caminist& c);

    virtual void prezinta_te();

    void ai_medie_pentru_camin();

    static void get_description();

    Caminist* clone() const ;

    void functie_virtuala_pura();
};

#endif // OOP_CAMINIST_H
