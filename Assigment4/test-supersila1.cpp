#include "gtest/gtest.h"
#include "SuperSila1.h"
#include "Pilot.h"
#include "Weapon.h"
#include "Transformer.h"

TEST(SuperSila1, getSpeed) {
    Pilot pilot("Optimus Prime"); 
    Weapon weapon("Blaster", 100); 
    SuperSila1 supersila1("Optimus", "Model X", 1000, pilot, weapon, 1000, 50); 
    EXPECT_EQ(supersila1.getSpeed(), 1000); 
}

TEST(SuperSila1, setSpeed) {
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    SuperSila1 supersila1("Optimus", "Model X", 1000, pilot, weapon, 1000, 50); 
    supersila1.setSpeed(1500); 
    EXPECT_EQ(supersila1.getSpeed(), 1500); 
}

TEST(SuperSila1, operatorLessThan) {
    Pilot pilot1("Optimus Prime");
    Weapon weapon1("Blaster", 100);
    SuperSila1 supersila1("Optimus", "Model X", 500, pilot1, weapon1, 400, 50); 

    Pilot pilot2("Megatron");
    Weapon weapon2("Cannon", 150);
    SuperSila1 supersila2("Megatron", "Model Y", 600, pilot2, weapon2, 600, 100); 

    EXPECT_TRUE(supersila1 < supersila2); 
}


