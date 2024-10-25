/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha3*/
#include "gtest/gtest.h"
#include "SuperSila1.h"


#include "Pilot.h"
#include "Weapon.h"
#include "Transformer.h"

TEST(SuperSila1, getSpeed) {
    Pilot pilot("Optimus Prime"); 
    Weapon weapon("Blaster", 100); 
    SuperSila1 supersila1("Optimus", "Model X", 1000, pilot, weapon, 1000); 
    EXPECT_EQ(supersila1.getSpeed(), 1000); 
}

TEST(SuperSila1, setSpeed) {
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    SuperSila1 supersila1("Optimus", "Model X", 1000, pilot, weapon, 1000); 
    supersila1.setSpeed(1500); 
    EXPECT_EQ(supersila1.getSpeed(), 1500); 
}
