/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha3*/
#include "gtest/gtest.h"
#include "TankCapacity.h"
#include "Pilot.h"
#include "Weapon.h"


TEST(TankCapacity, Initialization) {
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    
    TankCapacity tank("Tank1", "Model X", 1000, pilot, weapon, 150);
    
    EXPECT_EQ(tank.getVolume(), 150); 
}


TEST(TankCapacity, GetSetVolume) {
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    
    TankCapacity tank("Tank1", "Model X", 1000, pilot, weapon, 100);
    
    EXPECT_EQ(tank.getVolume(), 100); 
    
    tank.setVolume(200); 
    EXPECT_EQ(tank.getVolume(), 200); 
}


TEST(TankCapacity, OperatorLessThan) {
    Pilot pilot1("Optimus Prime");
    Weapon weapon1("Blaster", 100);
    
    TankCapacity tank1("Tank1", "Model X", 1000, pilot1, weapon1, 100);
    TankCapacity tank2("Tank2", "Model Y", 1000, pilot1, weapon1, 200);
    
    EXPECT_TRUE(tank1 < tank2); 
}


TEST(TankCapacity, OperatorGreaterThan) {
    Pilot pilot1("Optimus Prime");
    Weapon weapon1("Blaster", 100);
    
    TankCapacity tank1("Tank1", "Model X", 1000, pilot1, weapon1, 300);
    TankCapacity tank2("Tank2", "Model Y", 1000, pilot1, weapon1, 200);
    
    EXPECT_TRUE(tank1 > tank2); 
}

TEST(TankCapacity, OperatorLessThanOrEqual) {
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    
    TankCapacity tank1("Tank1", "Model X", 1000, pilot, weapon, 100);
    TankCapacity tank2("Tank2", "Model Y", 1000, pilot, weapon, 200);
    
    EXPECT_TRUE(tank1 <= tank2); 
    EXPECT_TRUE(tank1 <= tank1); 
}


TEST(TankCapacity, OperatorGreaterThanOrEqual) {
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    
    TankCapacity tank("Tank1", "Model X", 1000, pilot, weapon, 100);
    
    EXPECT_TRUE(tank >= tank); 
    TankCapacity tankHigher("Tank2", "Model Y", 1000, pilot, weapon, 200);
    EXPECT_FALSE(tank >= tankHigher); 
}


TEST(TankCapacity, OperatorEquals) {
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    
    TankCapacity tank1("Tank1", "Model X", 1000, pilot, weapon, 150);
    TankCapacity tank2("Tank2", "Model Y", 1000, pilot, weapon, 150);
    
    EXPECT_TRUE(tank1 == tank2); 
}

TEST(TankCapacity, OperatorNotEquals) {
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    
    TankCapacity tank1("Tank1", "Model X", 1000, pilot, weapon, 150);
    TankCapacity tank2("Tank2", "Model Y", 1000, pilot, weapon, 200);
    
    EXPECT_TRUE(tank1 != tank2); 
}
