#include "CameraFactory.h"
#include "camera.h"


// Implementation of createCamera for ConcreteCameraFactory
camera ConcreteCameraFactory::createCamera(const Caminist& coleg1_, const Caminist& coleg2_, int catistauincamera_, int nrcamera_, const std::string& aucursurimaine_) const {
    return camera(coleg1_, coleg2_, catistauincamera_, nrcamera_, aucursurimaine_);
}
