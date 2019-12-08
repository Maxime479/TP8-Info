//
// Created by huebe on 08/12/2019.
//

#ifndef TP8_INFO_POLYMORPHE_H
#define TP8_INFO_POLYMORPHE_H

#include "Robot.h"
#include "RobotRapide.h"
#include "RobotTeleporteur.h"
#include "RobotTraceur.h"
#include "RobotCarburant.h"
#include "RobotEscargot.h"
#include <list>

/// Prototypes des fonctions de Polymorphe.cpp
void testRobotPolymorphe(Robot& robotPolymorphe);
void testConteneurPolymorphe();
void remplirConteneurPolymorphe(std::list<Robot*>&bots);
void utiliserConteneurPolymorphe(std::list<Robot*>&bots);
void viderConteneurPolymorphe(std::list<Robot*>&bots);

#endif //TP8_INFO_POLYMORPHE_H
