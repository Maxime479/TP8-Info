#include <iostream>
#include "Polymorphe.h"

void testRobotPolymorphe(Robot& robotPolymorphe)
{
    for (int i = 0; i < 8; ++i)
    {
        robotPolymorphe.montrer();
        robotPolymorphe.avancer(1);
    }
}

///Code du TP à recopier
void testConteneurPolymorphe()
{
    std::list<Robot*> bots;
    remplirConteneurPolymorphe(bots);
    utiliserConteneurPolymorphe(bots);
    viderConteneurPolymorphe(bots);
}

void remplirConteneurPolymorphe(std::list<Robot*>& bots)
{
    ///On utilise push_back pour ajouter en allocation dynamique un nouveau Robot
    bots.push_back(new Robot{ 'A' });
    bots.push_back(new RobotTeleporteur{ 'B' });
    bots.push_back(new RobotRapide{ 'C' });
    bots.push_back(new RobotTraceur{ 'D', '.' });
    bots.push_back(new RobotCarburant{ 'E', '-', 5 });
    bots.push_back(new RobotEscargot{});
}

void utiliserConteneurPolymorphe(std::list<Robot*>& bots)
{
    ///On fait bouger tous les Robots en même temps
    for (size_t i = 0; i < 8; ++i)
    {
        std::cout << "===================="<<std::endl;

        for (auto& pz:bots)
        {
            ///Slide 66 du cours 8 Downcasting
            RobotTeleporteur* cz = dynamic_cast<RobotTeleporteur*>(pz);
            pz->montrer();
            pz->avancer(1);

            if (cz && i == 4)
                cz->teleporter(10);
        }
    }
}

/// Bien delete toutes les allocations dynamiques à la fin
void viderConteneurPolymorphe(std::list<Robot*>& bots)
{
    for (const auto& pz: bots)
    {
        delete pz;
    }
}