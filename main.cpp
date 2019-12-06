#include <iostream>

#include "Carburant.h"
#include "Escargot.h"
#include "Rapide.h"
#include "Robot.h"
#include "Teleporteur.h"
#include "Traceur.h"
#include "Polymorphe.h"

int main() {
    //salut c'est FLo


    std::cout << "Début du programme" << std::endl;

    std::cout << "========= Tests directs =========\n";
    testRobot();
    testRobotTeleporteur();
    testRobotRapide();
    testRobotTraceur();
    testRobotCarburant();
    testRobotEscargot();

    std::cout << "========= Tests polymorphisme =========\n";
    Robot a{'A'};
    RobotTeleporteur b{'B'};
    RobotRapide c{'C'};
    RobotTraceur d{'D', '.'};
    RobotCarburant e{'E', '-', 5};
    RobotEscargot f{};
    testRobotPolymorphe(a);
    testRobotPolymorphe(b); // Ici même résultat pour B que pour A
    testRobotPolymorphe(c);
    testRobotPolymorphe(d);
    testRobotPolymorphe(e);
    testRobotPolymorphe(f);

    std::cout << "========= Conteneur polymorphe =========\n";
    testConteneurPolymorphe();















    std::cout << "Fin du programme" << std::endl;

    return 0;
}