#include "RobotEscargot.h"

///Constructeur de RobotEscargot qui hérite de RobotTraceur
RobotEscargot::RobotEscargot(): RobotTraceur('@', '_'), m_avancementEscargot(0)
{

}

///Le RobotEscargot avance 1 fois sur 2
void RobotEscargot::avancer(int nb_Avancer)
{
        m_avancementEscargot += nb_Avancer;
        m_position += m_avancementEscargot / 2;
        m_avancementEscargot %= 2;
}