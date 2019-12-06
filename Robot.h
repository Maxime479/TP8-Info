//
// Created by Maxime on 02/12/2019.
//

#ifndef TP8_ROBOT_H
#define TP8_ROBOT_H

#include <iostream>


class Robot{

private:
    char name = 'A';
    int position;

public:
    Robot(int position = 0);
    ~Robot() = default;
    void testRobot();
    void montrer();
    void avancer();

};






#endif //TP8_ROBOT_H
