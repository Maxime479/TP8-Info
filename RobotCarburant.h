#ifndef TP8_INFO_ROBOTCARBURANT_H
#define TP8_INFO_ROBOTCARBURANT_H
#include "RobotTraceur.h"

///RobotCarburant qui hérite de RobotTraceur
class RobotCarburant : public RobotTraceur
{

public:
    ///Surcharge Constructeur par défaut
    RobotCarburant(char aspect, char trace, int carburant);
    ///Fonction avancer d'un entier donné
    void avancer(int nb_Avancer);

private:
    ///Attributs de la clase fille RobotCarburant
    int m_carburant;
};


#endif //TP8_INFO_ROBOTCARBURANT_H
