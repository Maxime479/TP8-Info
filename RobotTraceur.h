#ifndef TP8_INFO_ROBOTTRACEUR_H
#define TP8_INFO_ROBOTTRACEUR_H
#include "Robot.h"

///RobotTraceur qui hérite de Robot
class RobotTraceur : public Robot
{
public:
    ///Surcharge du Constructeur par défaut
    RobotTraceur(char aspect, char trace);
    void montrer();

private:
    ///Attribut spécifique au RobotTraceur
    char m_trace;
};


#endif //TP8_INFO_ROBOTTRACEUR_H
