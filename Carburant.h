//
// Created by Maxime on 02/12/2019.
//

#ifndef TP8_CARBURANT_H
#define TP8_CARBURANT_H

#include "Robot.h"


class Carburant : public Robot{


private:


public:
    Carburant(char name = 'E');
    ~Carburant() = default;
    void testRobotCarburant();


};

#endif //TP8_CARBURANT_H
