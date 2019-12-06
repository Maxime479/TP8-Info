//
// Created by Maxime on 02/12/2019.
//

#include "Traceur.h"

void testRobotTraceur()
{
    RobotTraceur x{'D', '.'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}