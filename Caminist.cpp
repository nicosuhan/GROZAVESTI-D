#include "Caminist.h"

int Caminist::counter = 0;

Caminist::Caminist(const std::string& nume_) : nume{nume_}, an{1}, medie{10}, specializare{"speci"} {
    counter++;
}

Caminist::Caminist(const Caminist& other)
        : nume{other.nume}, an{other.an}, medie{other.medie}, specializare{other.specializare} {
    counter++;
}

Caminist& Caminist::operator=(const Caminist& other) {
    if (this == &other) {
        return *this;
    }
    nume = other.nume;
    an = other.an;
    medie = other.medie;
    specializare = other.specializare;
    return *this;
}

Caminist::~Caminist() {
    counter--;
}

const std::string& Caminist::getNume() const {
    return nume;
}

void Caminist::setNume(const std::string& nume) {
    this->nume = nume;
}

int Caminist::getAn() const {
    return an;
}

void Caminist::setAn(int an) {
    this->an = an;
}

float Caminist::getMedie() const {
    return medie;
}

void Caminist::setMedie(float medie) {
    this->medie = medie;
}

const std::string& Caminist::getSpecializare() const {
    return specializare;
}

void Caminist::setSpecializare(const std::string& specializare) {
    this->specializare = specializare;
}

std::ostream& operator<<(std::ostream& os, const Caminist& c) {
    os << c.nume << " (An: " << c.an << ", Media: " << c.medie << ", Specializare: " << c.specializare << ")";
    return os;
}

void Caminist::prezinta_te() {
    std::cout << "Buna, sunt " << nume << ", student in anul " << an << " la specializarea " << specializare << " cu media " << medie << ".\n";
}

void Caminist::ai_medie_pentru_camin() {
    if (medie >= 7.0) {
        std::cout << nume << " are media suficientă pentru cazare în cămin.\n";
    } else {
        std::cout << nume << " nu are media suficientă pentru cazare în cămin.\n";
    }
}

void Caminist::get_description() {
    std::cout << "Clasa Caminist reprezintă un student care locuiește într-un cămin.\n";
}

Caminist* Caminist::clone() const {
    return new Caminist(*this);
}

void Caminist::functie_virtuala_pura() {
    // Implementare funcție virtuală pură
}
