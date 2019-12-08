#ifndef TP8_INFO_ROBOTESCARGOT_H
#define TP8_INFO_ROBOTESCARGOT_H
#include "RobotTraceur.h"

///RobotEscargot qui hérite de RobotTraceur
class RobotEscargot : public RobotTraceur
{

public:
    ///Constructeur par défaut
    RobotEscargot();
    ///Fonction avancer d'un entier donné
    void avancer(int nb_Avancer);

private:
    ///Attribut spécifique à la classe fille RobotEscargot
    ///Permet d'implémenter la fonction avancer une fois sur deux du Robot Escargot
    int m_avancementEscargot;
};


#endif //TP8_INFO_ROBOTESCARGOT_H
