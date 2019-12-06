//
// Created by Maxime on 02/12/2019.
//

#include "Rapide.h"

void testRobotRapide()
{
    RobotRapide x{'C'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}
