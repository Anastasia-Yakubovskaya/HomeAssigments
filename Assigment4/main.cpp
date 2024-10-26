#include <iostream>
#include "SuperSila1.h"
#include "SuperSila2.h"
#include "TankCapacity.h"
#include "Pilot.h" 
#include "Weapon.h" 


bool isStronger(const SuperSila1& s1, const SuperSila2& s2) {
    return (s1.getPower() > s2.getPower()) || 
           (s1.getPower() == s2.getPower() && s1.getSpeed() > s2.getTimeOfTransformation());
}


bool isStronger(const TankCapacity& tank, const SuperSila1& s1) {
    return (tank.getPower() > s1.getPower()) || 
           (tank.getPower() == s1.getPower() && tank.getVolume() > s1.getSpeed());
}


bool isEqual(const TankCapacity& tank, const SuperSila2& s2) {
    return (tank.getPower() == s2.getPower() && tank.getVolume() == s2.getTimeOfTransformation());
}

int main() {
 
    Pilot pilot("John Doe");
    Weapon weapon("Laser", 50);


    SuperSila1 superSila1("Optimus Prime", "Model X", 800, pilot, weapon, 200);
    SuperSila2 superSila2("Megatron", "Model Y", 750, pilot, weapon, 5);
    TankCapacity tankCapacity("Bumblebee", "Model Z", 600, pilot, weapon, 100);
    

    std::cout << superSila1 << std::endl;
    std::cout << superSila2 << std::endl;
    std::cout << tankCapacity << std::endl;

    if (isStronger(superSila1, superSila2)) {
        std::cout << "SuperSila1 is stronger than SuperSila2" << std::endl;
    } else {
        std::cout << "SuperSila2 is stronger than SuperSila1" << std::endl;
    }

    if (isStronger(tankCapacity, superSila1)) {
        std::cout << "TankCapacity is stronger than SuperSila1" << std::endl;
    } else {
        std::cout << "SuperSila1 is stronger than TankCapacity" << std::endl;
    }

 
    if (isEqual(tankCapacity, superSila2)) {
        std::cout << "TankCapacity is equal to SuperSila2" << std::endl;
    } else {
        std::cout << "TankCapacity is not equal to SuperSila2" << std::endl;
    }

    return 0;
}
