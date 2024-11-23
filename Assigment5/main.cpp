#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "TankCapacity.h"
#include "Pilot.h"
#include "Weapon.h"

bool isStronger(const Autobot& s1, const Decepticon& s2) {
    return (s1.getPower() == s2.getPower() && s1.getSpeed() > s2.getTimeOfTransformation());
}

bool isStronger(const TankCapacity& tank, const Autobot& s1) {
    return (tank.getPower() > s1.getPower()) || 
           (tank.getPower() == s1.getPower() && tank.getVolume() > s1.getSpeed());
}

int main() {
    Pilot pilot("John Doe");
    Weapon weapon("Laser", 50);
    
    TankCapacity tank1("Tank1", "Model A", 150, pilot, weapon, 200);
    TankCapacity tank2("Tank2", "Model B", pilot, weapon, 250);
    TankCapacity tank3("Tank3", 300); 
    

    Autobot supertank1("Super Tank", "Model Aрр", 200, pilot, weapon, 500, 50);
    Autobot supertank2("Super Tank Beta", "Model B", pilot, weapon, 400, 75);
    Autobot supertank3("Super Tank Gamma", 300, 100);

    Decepticon megatron("Megatron", "Model Y", 750, pilot, weapon, 5);
    Decepticon starscream("Starscream", "Model Z", pilot, weapon, 10); 
    Decepticon thundercracker("Thundercracker", 15); 



    supertank1.transform();
    supertank1.openFire();
    supertank1.ultra();

    megatron.transform();
    megatron.openFire();
    megatron.ultra();
    
    
    std::cout << supertank1 << std::endl;
    std::cout << megatron << std::endl;
    std::cout << starscream << std::endl;
    std::cout << thundercracker << std::endl;
    std::cout << tank1 << std::endl;

    if (isStronger(supertank1, megatron)) {
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
