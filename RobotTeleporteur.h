#ifndef TP8_INFO_ROBOTTELEPORTEUR_H
#define TP8_INFO_ROBOTTELEPORTEUR_H

#include "Robot.h"

///RobotTeleporteur qui hérite de Robot
class RobotTeleporteur : public Robot
{
public:
    ///Surcharge du Constructeur par défaut
    RobotTeleporteur(char aspect);
    void teleporter(int nb_Teleporter);

private:

};

#endif //TP8_INFO_ROBOTTELEPORTEUR_H
