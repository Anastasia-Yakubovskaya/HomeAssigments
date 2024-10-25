/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha3*/
#include "gtest/gtest.h"
#include "SuperSila2.h"
#include "Pilot.h"
#include "Weapon.h"
#include "Transformer.h"

TEST(SuperSila2, getTimeOfTransformation) {
    Pilot pilot("Optimus Prime"); 
    Weapon weapon("Blaster", 100); 
    SuperSila2 supersila2("Optimus", "Model X", 1000, pilot, weapon, 10); 
    EXPECT_EQ(supersila2.getTimeOfTransformation(), 10); 
}

TEST(SuperSila2, setTimeOfTransformation) {
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    SuperSila2 supersila2("Optimus", "Model X", 1000, pilot, weapon, 150); 
    supersila2.setTimeOfTransformation(15); 
    EXPECT_EQ(supersila2.getTimeOfTransformation(), 15); 
}
