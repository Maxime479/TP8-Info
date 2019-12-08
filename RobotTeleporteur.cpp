#include "RobotTeleporteur.h"
#include "Robot.h"

///Constructeur de RobotTeleporteur qui hérite de Robot
RobotTeleporteur::RobotTeleporteur(char aspect): Robot(aspect)
{

}

///Téléporte le RobotTeleporteur à une position donnée
void RobotTeleporteur::teleporter(int nb_Teleporter)
{
    m_position = nb_Teleporter;
}
