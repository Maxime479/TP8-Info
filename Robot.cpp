#include <iostream>
#include "Robot.h"

///Constructeur par défaut
Robot::Robot() : m_aspect('A'), m_position(0)
{

}
///Surcharge du constructeur
Robot::Robot(char aspect) : m_aspect(aspect), m_position(0)
{

}

///Faire avancer le Robot
void Robot::avancer(int nb_Avancer)
{
    m_position += nb_Avancer;
}

///Afficher le Robot
/// TIPS du cours: std::string(n, ' ') répéter n fois un caractère ' ' dans un affichage sans faire de boucle
void Robot::montrer()
{
    std::cout << std::string(m_position, ' ') << m_aspect << std::endl;
}