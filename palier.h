//
// Created by csuha on 4/16/2024.
//

#ifndef OOP_PALIER_H
#define OOP_PALIER_H
#include <string>
#include "Caminist.h"
#include "camera.h"
class palier {
private:
    camera camera1, camera2;
    std::string numee;
    int nretaj;

public:
    // Constructor explicit de inițializare
    explicit palier(const camera& camera1_, const camera& camera2_, const std::string& numee_, int nretaj_);

    // Supraincarcarea operatorului <<
    friend std::ostream& operator<<(std::ostream& os, const palier& p);

    // Getter pentru camera1
    const camera& getCamera1() const;

    // Getter pentru camera2
    const camera& getCamera2() const;

    // Funcția dampetrcere
    void dampetrcere();

    // Funcția sef_palier
    void sef_palier();
};

#endif //OOP_PALIER_H
