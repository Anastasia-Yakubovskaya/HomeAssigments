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

int main() {
 
    Pilot pilot("John Doe");
    Weapon weapon("Laser", 50);
    
    TankCapacity tank1("Tank1", "Model A", 150, pilot, weapon, 200);
    TankCapacity tank2("Tank2", "Model B", pilot, weapon, 250);
    TankCapacity tank3("Tank3", 300); 
    
    SuperSila1 supertank1("Super Tank", "Model Aрр", 200, pilot, weapon, 500, 50);
    SuperSila1 supertank2("Super Tank Beta", "Model Bмм", pilot, weapon, 400, 75);
    SuperSila1 supertank3("Super Tank Gamma", 300, 100);


    SuperSila2 superSila2("Megatron", "Model Y", 750, pilot, weapon, 5);
    SuperSila2 superSila2_default("Starscream", "Model Z", pilot, weapon, 10); 
    SuperSila2 superSila2_minimal("Thundercracker", 15); 


    std::cout << supertank1 << std::endl;
    std::cout << superSila2 << std::endl;
    std::cout << superSila2_default << std::endl;
    std::cout << superSila2_minimal << std::endl;
    std::cout << tank1 << std::endl;

    if (isStronger(supertank1, superSila2)) {
        std::cout << "Super Tank is stronger than Megatron" << std::endl;
    } else {
        std::cout << "Megatron is stronger than Super Tank" << std::endl;
    }

    if (isStronger(tank1, supertank1)) {
        std::cout << "Tank1 is stronger than Super Tank" << std::endl;
    } else {
        std::cout << "Super Tank is stronger than Tank1" << std::endl;
    }


    return 0;
}
