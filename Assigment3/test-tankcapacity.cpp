/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha3*/
#include "gtest/gtest.h"
#include "TankCapacity.h"
#include "Pilot.h"
#include "Weapon.h"
#include "Transformer.h"

TEST(TankCapacity, getVolume) {
    Pilot pilot("Optimus Prime"); 
    Weapon weapon("Blaster", 100); 
    TankCapacity tankcapacity("Optimus", "Model X", 1000, pilot, weapon, 10); 
    EXPECT_EQ(tankcapacity.getVolume(), 10); 
}

TEST(TankCapacity, setVolume) {
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    TankCapacity tankcapacity("Optimus", "Model X", 1000, pilot, weapon, 150); 
    tankcapacity.setVolume(15); 
    EXPECT_EQ(tankcapacity.getVolume(), 15); 
}
