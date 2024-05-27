#ifndef CAMERAFACTORY_H
#define CAMERAFACTORY_H

#include "camera.h"

class CameraFactory {
public:
    virtual ~CameraFactory() = default;
    virtual camera createCamera(const Caminist& coleg1_, const Caminist& coleg2_, int catistauincamera_, int nrcamera_, const std::string& aucursurimaine_) const = 0;
};

class ConcreteCameraFactory : public CameraFactory {
public:
    camera createCamera(const Caminist& coleg1_, const Caminist& coleg2_, int catistauincamera_, int nrcamera_, const std::string& aucursurimaine_) const override;
};

#endif // CAMERAFACTORY_H
