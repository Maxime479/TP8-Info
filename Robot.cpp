//
// Created by Maxime on 02/12/2019.
//

#include "Robot.h"


Robot::Robot(char name, int position, void montrer, void testRobot, void avancer){}






void testRobot()
{
    Robot x{'A'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1); // Si on mettait 2 ici on irait 2x plus vite !
    }
}

void montrer(){


}

void avancer(){


}