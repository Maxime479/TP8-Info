#include <iostream>
#include "RobotTraceur.h"

///Constructeur de RobotTraceur qui hérite de Robot
RobotTraceur::RobotTraceur(char aspect, char trace) : Robot(aspect), m_trace(trace)
{

}
///L'affichage fait apparaître des trainées (m_trace)
void RobotTraceur::montrer()
{
    std::cout << std::string(m_position, m_trace) << m_aspect << std::endl;
}