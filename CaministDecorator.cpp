#include "CaministDecorator.h"

// Implementarea metodelor clasei CaministDecorator

CaministDecorator::CaministDecorator(Caminist& caminist_)
        : Caminist(caminist_), caminist(caminist_) {}

// Re-implementarea metodei prezinta_te pentru CaministDecorator
void CaministDecorator::prezinta_te() {
    caminist.prezinta_te();
}

// Implementarea metodelor clasei SportivCaminist

SportivCaminist::SportivCaminist(Caminist& caminist_)
        : CaministDecorator(caminist_) {}

// Re-implementarea metodei prezinta_te pentru SportivCaminist
void SportivCaminist::prezinta_te() {
    caminist.prezinta_te();
    std::cout << "Sunt si sportiv.\n";
}
