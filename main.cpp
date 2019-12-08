#include <iostream>
#include "Robot.h"
#include "RobotTeleporteur.h"
#include "RobotRapide.h"
#include "RobotTraceur.h"
#include "RobotCarburant.h"
#include "RobotEscargot.h"
#include "Polymorphe.h"

///Déclaration des prototypes des fonctions tests
void testRobot();
void testRobotTeleporteur();
void testRobotRapide();
void testRobotTraceur();
void testRobotCarburant();
void testRobotEscargot();

///Prototypes des fonctions tests pour chaque partie
void testsDirects();
void testsPolymorphismes();
void conteneurPolymorphe();
void menu();


int main()
{
    /// Lancement de la fonction menu
    //menu();

    int a =3;
    std::cout << a << std::endl;

    return 0;
}


/// Fonction pour tester 1 Robot
void testRobot()
{
    ///On crée un Robot x pour aspect A
    Robot x{ 'A' };
    ///On répète les actions
    for (int i = 0; i < 8; ++i)
    {
        ///On affiche le Robot
        x.montrer();
        ///On fait avancer le Robot avec une certaine vitesse en paramètre de la fonction
        x.avancer(1); // Si on mettait 2 ici on irait 2x plus vite !
    }
}

/// Fonction pour tester 1 RobotTeleporteur
void testRobotTeleporteur()
{
    RobotTeleporteur x{ 'B' };
    for (int i = 0; i < 8; ++i)
    {
        x.montrer();
        x.avancer(1);
        /// Lorsque i est égale à 3 on téléporte le robot à 8
        if (i == 3)
            x.teleporter(8);
    }
}

/// Fonction pour tester 1 RobotRapide
///Voir commentaires fonction test Robot
void testRobotRapide()
{
    RobotRapide x{ 'C' };
    for (int i = 0; i < 8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}

/// Fonction pour tester 1 RobotTraceur
///Voir commentaires fonction test Robot
void testRobotTraceur()
{
    RobotTraceur x{ 'D', '.' };
    for (int i = 0; i < 8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}

/// Fonction pour tester 1 RobotCarburant
///Voir commentaires fonction test Robot
void testRobotCarburant()
{
    RobotCarburant x{ 'E', '-', 5 };
    for (int i = 0; i < 8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}

/// Fonction pour tester 1 RobotEscargot
///Voir commentaires fonction test Robot
void testRobotEscargot()
{
    RobotEscargot x{};
    for (int i = 0; i < 8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}

void testsDirects()
{
    /// 1ere Partie Test Directs
    std::cout << "========= Tests directs =========\n";

    ///Fonction qui crée un Robot, le montre et le fait avancer
    testRobot();
    testRobotTeleporteur();
    testRobotRapide();
    testRobotTraceur();
    testRobotCarburant();
    testRobotEscargot();
}

void testsPolymorphismes()
{
    ///2eme Partie Tests Polymorphismes
    std::cout << "========= Tests polymorphisme =========\n";

    ///On crée les différentes sortes de Robots
    Robot a{ 'A' };
    RobotTeleporteur b{ 'B' };
    RobotRapide c{ 'C' };
    RobotTraceur d{ 'D', '.' };
    RobotCarburant e{ 'E', '-', 5 };
    RobotEscargot f{};

    ///On montre et on fait avancer le robot
    testRobotPolymorphe(a);
    testRobotPolymorphe(b);  // Ici même résultat pour B que pour A
    testRobotPolymorphe( c );
    testRobotPolymorphe( d );
    testRobotPolymorphe( e );
    testRobotPolymorphe( f );
}

void conteneurPolymorphe()
{
    ///3eme Partie Conteneur Polymorphe list
    std::cout << "========= Conteneur polymorphe =========" << std::endl;
    testConteneurPolymorphe();
}

/// Menu du programme
void menu()
{
    /// Affichage du Menu
    std::cout << "0/ Quitter" << std::endl
              << "1/ Affichage Tests Directs" << std::endl
              << "2/ Affichage Tests Polymorphisme" << std::endl
              << "3/ Affichage Conteneur Polymorphe" << std::endl
              << "4/ Les 3 en meme temps" << std::endl;

    int choix;
    /// Blindage de la saisie utilisateur du menu
    do {
        std::cout << "Choix menu : ";
        std::cin >> choix;
        switch (choix) {
            case 0: ///Quitter
                break;

            case 1:
            {
                testsDirects();
                break;
            }
            case 2:
            {
                testsPolymorphismes();
                break;
            }
            case 3:
            {
                conteneurPolymorphe();
                break;
            }
            case 4:
            {
                testsDirects();
                testsPolymorphismes();
                conteneurPolymorphe();
                break;
            }
            default:
                std::cout << "Erreur choix menu" << std::endl;
                break;
        }
    } while (choix < 0 || choix >4);
}


