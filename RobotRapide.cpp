#include "RobotRapide.h"

///Constructeur de RobotRapide qui hérite de Robot
RobotRapide::RobotRapide(char aspect) : Robot(aspect)
{

}

///Avance 2 fois plus vite
void RobotRapide::avancer(int nb_Avancer)
{
    m_position += 2 * nb_Avancer;
}