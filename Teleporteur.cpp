//
// Created by Maxime on 02/12/2019.
//

#include "Teleporteur.h"

void testRobotTeleporteur()
{
    RobotTeleporteur x{'B'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
        if (i==3)
            x.teleporter(8);
    }
}
