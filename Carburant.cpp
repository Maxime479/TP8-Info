//
// Created by Maxime on 02/12/2019.
//

#include "Carburant.h"

Carburant::Carburant(char name, int position, void montrer, void testRobot, void avancer):Robot(name, position){}



void testRobotCarburant()
{
    RobotCarburant x{'E', '-', 5};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}
