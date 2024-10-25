/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha3*/
#include <iostream>
#include "Pilot.h"
#include "Weapon.h"
#include "SuperSila1.h"
#include "SuperSila2.h"
#include "TankCapacity.h"
#include "Transformer.h"
int main() {
    Pilot pilot("John Doe");
    Weapon weapon("Laser", 50);
    Transformer t("Optimus Prime", "Cybertronian", 1000, pilot, weapon);

    std::cout << t << std::endl;

    return 0; 
}
