#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "TankCapacity.h"
#include "Pilot.h"
#include "Weapon.h"
#include <vector>

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



    /*tank1.transform();
    tank1.openFire();
    tank1.ultra();
    
    
    supertank1.transform();
    supertank1.openFire();
    supertank1.ultra();

    megatron.transform();
    megatron.openFire();
    megatron.ultra();*/
    
    /*Transformer* transformers[6];
    
    transformers[0] = &tank1;
    transformers[1] = &tank2;
    transformers[2] = &supertank1;
    transformers[3] = &supertank2;
    transformers[4] = &megatron;
    transformers[5] = &starscream;

    
    for (int i = 0; i < 6; ++i) {
        transformers[i]->transform();
        transformers[i]->openFire();
        transformers[i]->ultra();
        
        std::cout << "\nDetails of Transformer " << i + 1 << ":\n" << *transformers[i] << std::endl;
    }*/
    
    

    std::vector<Transformer*> transformers;

    transformers.push_back(&tank1);
    transformers.push_back(&tank2);
    transformers.push_back(&tank3);
    
    transformers.push_back(&supertank1);
    transformers.push_back(&supertank2);
    transformers.push_back(&supertank3);

    transformers.push_back(&megatron);
    transformers.push_back(&starscream);
    transformers.push_back(&thundercracker);


 
    
    for (Transformer* transformer : transformers) {
        transformer->transform();
        transformer->openFire();
        transformer->ultra();
        
    }
    //std::cout << supertank1 << std::endl;
    //std::cout << megatron << std::endl;
    //std::cout << starscream << std::endl;
    //std::cout << thundercracker << std::endl;
    //std::cout << tank1 << std::endl;

    /*if (isStronger(supertank1, megatron)) {
        std::cout << "Super Tank is stronger than Megatron" << std::endl;
    } else {
        std::cout << "Megatron is stronger than Super Tank" << std::endl;
    }

    if (isStronger(tank1, supertank1)) {
        std::cout << "Tank1 is stronger than Super Tank" << std::endl;
    } else {
        std::cout << "Super Tank is stronger than Tank1" << std::endl;
    }*/

    return 0;
}
