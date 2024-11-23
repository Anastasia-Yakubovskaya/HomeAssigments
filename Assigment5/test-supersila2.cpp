/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha3*/
#include "gtest/gtest.h"
#include "Decepticon.h"
#include "Pilot.h"
#include "Weapon.h"

TEST(Decepticon, Initialization) {
    Pilot pilot("Optimus Prime"); 
    Weapon weapon("Blaster", 100); 
    Decepticon Decepticon("Optimus", "Model X", 1000, pilot, weapon, 20); 
    EXPECT_EQ(Decepticon.getTimeOfTransformation(), 20); 
}


TEST(Decepticon, ModifyTimeOfTransformation) {
    Pilot pilot("Optimus Prime"); 
    Weapon weapon("Blaster", 100); 
    Decepticon Decepticon("Optimus", "Model X", 1000, pilot, weapon, 30); 
    Decepticon.setTimeOfTransformation(25); 
    EXPECT_EQ(Decepticon.getTimeOfTransformation(), 25); 
}


TEST(Decepticon, OperatorLessThan) {
    Pilot pilot1("Optimus Prime"); 
    Weapon weapon1("Blaster", 100); 
    Decepticon supersila1("Optimus", "Model X", 1000, pilot1, weapon1, 15); 
    
    Pilot pilot2("Megatron"); 
    Weapon weapon2("Cannon", 150); 
    Decepticon Decepticon("Megatron", "Model Y", 600, pilot2, weapon2, 25); 

    EXPECT_TRUE(supersila1 < Decepticon);  
}


TEST(Decepticon, OperatorGreaterThan) {
    Pilot pilot1("Optimus Prime"); 
    Weapon weapon1("Blaster", 100); 
    Decepticon supersila1("Optimus", "Model X", 1000, pilot1, weapon1, 30); 
    
    Pilot pilot2("Megatron"); 
    Weapon weapon2("Cannon", 150); 
    Decepticon Decepticon("Megatron", "Model Y", 600, pilot2, weapon2, 20); 

    EXPECT_TRUE(supersila1 > Decepticon); 
}


TEST(Decepticon, OperatorEquals) {
    Pilot pilot1("Optimus Prime"); 
    Weapon weapon1("Blaster", 100); 
    Decepticon supersila1("Optimus", "Model X", 1000, pilot1, weapon1, 15); 
    
    Pilot pilot2("Megatron"); 
    Weapon weapon2("Cannon", 150); 
    Decepticon Decepticon("Megatron", "Model Y", 600, pilot2, weapon2, 15); 

    EXPECT_TRUE(supersila1 == Decepticon);  
}

TEST(Decepticon, GetTimeOfTransformation) {
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    Decepticon Decepticon("Optimus", "Model X", 1000, pilot, weapon, 10);

   
    EXPECT_EQ(Decepticon.getTimeOfTransformation(), 10);
}


TEST(Decepticon, SetTimeOfTransformation) {
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    Decepticon Decepticon("Optimus", "Model X", 1000, pilot, weapon, 20); 


    Decepticon.setTimeOfTransformation(15);

    EXPECT_EQ(Decepticon.getTimeOfTransformation(), 15);
}


TEST(Decepticon, OperatorNotEquals) {
    Pilot pilot1("Optimus Prime"); 
    Weapon weapon1("Blaster", 100); 
    Decepticon supersila1("Optimus", "Model X", 1000, pilot1, weapon1, 15); 
    
    Pilot pilot2("Megatron"); 
    Weapon weapon2("Cannon", 150); 
    Decepticon Decepticon("Megatron", "Model Y", 600, pilot2, weapon2, 20); 

    EXPECT_TRUE(supersila1 != Decepticon);  
}


TEST(Decepticon, OperatorLessThanOrEqual) {
    Pilot pilot1("Optimus Prime"); 
    Weapon weapon1("Blaster", 100); 
    Decepticon supersila1("Optimus", "Model X", 1000, pilot1, weapon1, 20); 
    
    Pilot pilot2("Megatron"); 
    Weapon weapon2("Cannon", 150); 
    Decepticon Decepticon("Megatron", "Model Y", 600, pilot2, weapon2, 25); 

    EXPECT_TRUE(supersila1 <= Decepticon); 
}


TEST(Decepticon, OperatorGreaterThanOrEqual) {
    Pilot pilot1("Optimus Prime"); 
    Weapon weapon1("Blaster", 100); 
    Decepticon supersila1("Optimus", "Model X", 1000, pilot1, weapon1, 25); 
    
    Pilot pilot2("Megatron"); 
    Weapon weapon2("Cannon", 150); 
    Decepticon Decepticon("Megatron", "Model Y", 600, pilot2, weapon2, 20); 

    EXPECT_TRUE(supersila1 >= Decepticon); 
}
