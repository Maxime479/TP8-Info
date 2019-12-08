#include "RobotCarburant.h"

///Constructeur de RobotCarburant qui hérite de RobotTraceur
RobotCarburant::RobotCarburant(char aspect, char trace, int carburant) : RobotTraceur(aspect, trace), m_carburant(carburant)
{

}

///Le RobotCarburant avance seulement s'il a assez de carburant
void RobotCarburant::avancer(int nb_Avancer)
{
    for (int i(0); i < nb_Avancer; ++i)
    {
        if (m_carburant > 0)
        {
            m_carburant -= 1;
            m_position += 1;
        }
    }
}