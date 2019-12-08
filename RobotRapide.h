#ifndef TP8_INFO_ROBOTRAPIDE_H
#define TP8_INFO_ROBOTRAPIDE_H
#include "Robot.h"

///RobotRapide qui hérite de Robot
class RobotRapide : public Robot
{
public:
    ///Surcharge du Constructeur par défaut
    RobotRapide(char aspect);
    void avancer(int nb_Avancer);

private:

};

#endif //TP8_INFO_ROBOTRAPIDE_H
