//
// Created by csuha on 4/16/2024.
//
#include <iostream>
#include "Caminist.h"
#include "InvalidAn.h"
const std::string & Caminist::getNume() const {
    return nume;
}

int Caminist::getAn() const {
    return an;
}
void Caminist::setAn(int an) {
    if(an!=1 and an!=2 and an!=3 and an!=4) throw InvalidAn();
    Caminist::an = an;
}
float Caminist::getMedie() const {
    return medie;
}
void Caminist::setMedie(float medie) {
    Caminist::medie = medie;
}
const std::string & Caminist::getSpecializare() const {
    return specializare;
}
void Caminist::setSpecializare(const std::string &specializare) {
    Caminist::specializare = specializare;
}

//constructorul de copiere
Caminist::Caminist(const Caminist& other): nume{other.nume}, an{other.an}, medie{other.medie}, specializare{other.specializare}
{
    //std::cout<<"Testam constructorul de copiere"<<std::endl;
    //sterge comentariul pentru a testa
}

//operator= de copiere
Caminist& Caminist::operator=(const Caminist &other)
{
    nume=other.nume;
    an=other.an;
    medie=other.medie;
    specializare=other.specializare;
    //std::cout<<"Testam operatorul= de copiere"<<std::endl;
    return *this;
}

//destructor
Caminist::~Caminist()
{
    //std::cout<<"A fost apelat destructorul"<<std::endl;
    //sterge comentariul pentru verificarea apelarii
}


std::ostream &operator<<(std::ostream &os, const Caminist &c) {
    os<< "Nume: " << c.nume << ", An: " << c.an << ", Medie: " << c.medie << ", Specializare: " << c.specializare;
    return os;
}

//functii
void Caminist::prezinta_te()
{
    std::cout<<"Numele meu este "<<nume<<" si sunt student in anul "<<an<<" la specializarea "<<specializare<<"."<<std::endl;
}
void Caminist::ai_medie_pentru_camin()
{
    if(medie>7.34) std::cout<<"Felicitari, ai loc la camin!"<<std::endl;
    else std::cout<<"Mult succes la cautat chirie."<<std::endl;
}

void Caminist::get_description(){
    //std::cout<<"Aceasta clasa contine datele despre un Caminist";
}

int Caminist::counter=0;

Caminist *Caminist::clone() {
    return nullptr;
}

void Caminist::functie_virtuala_pura() {

}

Caminist::Caminist(const std::string &nume) : nume(nume) {}

