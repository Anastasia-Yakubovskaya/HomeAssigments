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
//bool isEqual(const TankCapacity& tank, const SuperSila2& s2) {
    //return (tank.getPower() == s2.getPower() && tank.getVolume() == s2.getTimeOfTransformation());
//}
int main() {
 
    Pilot pilot("John Doe");
    Weapon weapon("Laser", 50);
    
    TankCapacity tank1("Tank1", "Model A", 150, pilot, weapon, 200);
    TankCapacity tank2("Tank2", "Model B", pilot, weapon, 250);
    TankCapacity tank3("Tank3", 300); 
    
    SuperSila1 supertank1("Super Tank", "Model A", 200, pilot, weapon, 500, 50);
    SuperSila1 supertank2("Super Tank Beta", "Model B", pilot, weapon, 400, 75);
    SuperSila1 supertank3("Super Tank Gamma", 300, 100);

    //SuperSila1 superSila1("Optimus Prime", "Model X", 800, pilot, weapon, 200);
    SuperSila2 superSila2("Megatron", "Model Y", 750, pilot, weapon, 5);
    //TankCapacity tankCapacity("Bumblebee", "Model Z", 600, pilot, weapon, 100);
    
    std::cout << supertank1 << std::endl;
    std::cout << superSila2 << std::endl;
    std::cout << tank1 << std::endl;
    
    

    if (isStronger(supertank1, superSila2)) {
        std::cout << "Optimus Prime is stronger than Megatron" << std::endl;
    } else {
        std::cout << "Megatron is stronger than Optimus Prime" << std::endl;
    }

    if (isStronger(tank1, supertank1)) {
        std::cout << "Bumblebee is stronger than Optimus Prime" << std::endl;
    } else {
        std::cout << "Optimus Prime is stronger than Bumblebee" << std::endl;
    }

 
    //if (isEqual(tankCapacity, superSila2)) {
        //std::cout << "TankCapacity is equal to SuperSila2" << std::endl;
    //} else {
        //std::cout << "TankCapacity is not equal to SuperSila2" << std::endl;
    //}

    return 0;
}
