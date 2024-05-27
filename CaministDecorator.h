#ifndef CAMINISTDECORATOR_H
#define CAMINISTDECORATOR_H

#include "Caminist.h"

class CaministDecorator : public Caminist {
protected:
    Caminist& caminist;

public:
    explicit CaministDecorator(Caminist& caminist_);
    void prezinta_te() override;
};

class SportivCaminist : public CaministDecorator {
public:
    explicit SportivCaminist(Caminist& caminist_);
    void prezinta_te() override;
};

#endif // CAMINISTDECORATOR_H
