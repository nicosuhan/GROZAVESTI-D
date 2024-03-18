//
// Created by csuha on 4/16/2024.
//

#ifndef OOP_CAMIN_H
#define OOP_CAMIN_H
#include <string>
#include "Caminist.h"
#include "camera.h"
#include "palier.h"
#include <vector>
class camin {
private:
    std::string numecamin;
    int nota;
    int nrloccamin;
    std::vector<palier> paliere;

public:
    // Setter pentru nota
    void setNota(int nota);

    // Adăugarea unui palier
    void add_palier(const palier& pal);

    // Constructor explicit de inițializare
    explicit camin(const std::string& numecamin_, int nota_, int nrloccamin_);

    // Supraincarcarea operatorului <<
    friend std::ostream& operator<<(std::ostream& os, const camin& cam);

    // Funcția pentru calcularea mediei
    void media();
};


#endif //OOP_CAMIN_H
