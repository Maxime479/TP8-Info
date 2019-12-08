#ifndef TP8_INFO_ROBOT_H
#define TP8_INFO_ROBOT_H

///Classe mère Robot
class Robot
{

public:
    ///Constructeur par défaut
    Robot();

    ///Surcharge du Constructeur aspect en paramètre
    Robot(char aspect);

    ///Méthodes virtuelles pour le polymorphisme
    ///On ajoute seulement "virtual" dans la classe mère et les classes filles en héritent !
    virtual void montrer();

    ///On passe en paramètre de la fonction un entier pour faire avancer le Robot
    virtual void avancer(int nb_Avancer);

protected:
/// Protected car les classes filles doivent y accéder

    ///Aspect du Robot
    char m_aspect;

    ///Position du Robot
    int m_position;
};


#endif //TP8_INFO_ROBOT_H
