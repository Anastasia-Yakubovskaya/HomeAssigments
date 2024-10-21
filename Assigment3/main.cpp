#include <iostream>
#include "Pilot.h"
#include "Weapon.h"
#include "SuperSila1.h"
#include "SuperSila2.h"
#include "TankCapacity.h"

int main() {
    Pilot pilot1("Optimus Prime");
    Pilot pilot2("Megatron");

    Weapon weapon1("pistolet", 101010);
    Weapon weapon2("blaster", 455);
    Weapon weapon3("laser", 6967);

    SuperSila1 optimusprime("Optimus Prime", "AO-1", 1000, pilot1, weapon1, 60);
    SuperSila2 megatron("Megatron", "DM-2", 1200, pilot2, weapon2, 80); 
    TankCapacity bumblebee("Bumblebee", "VW-1", 700, pilot1, weapon3, 60); 

    std::cout << optimusprime.getName() << " speed: " << optimusprime.getSpeed() 
              << ", weapon: " << optimusprime.getWeaponType() 
              << " (damage: " << optimusprime.getWeaponDamage() << ")" << std::endl;

    std::cout << megatron.getName() << " time of transformation: " << megatron.getTimeOfTransformation() 
              << ", weapon: " << megatron.getWeaponType() 
              << " (damage: " << megatron.getWeaponDamage() << ")" << std::endl;

    std::cout << bumblebee.getName() << " tank volume: " << bumblebee.getVolume() 
              << ", weapon: " << bumblebee.getWeaponType() 
              << " (damage: " << bumblebee.getWeaponDamage() << ")" << std::endl;
    
    return 0;
}
