#include "gtest/gtest.h"
#include "Autobot.h"
#include "Pilot.h"
#include "Weapon.h"

TEST(AutobotTest, Transform) {
    testing::internal::CaptureStdout(); 
    Autobot autobot("Bumblebee", "Model X", 200, Pilot("Pilot"), Weapon("Laser", 50), 150, 300);
    autobot.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot Bumblebee is transforming!\n");
}

TEST(AutobotTest, OpenFire) {
    testing::internal::CaptureStdout();
    Autobot autobot("Bumblebee", "Model X", 200, Pilot("Pilot"), Weapon("Laser", 50), 150, 300);
    autobot.openFire();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot Bumblebee is opening fire!\n");
}

TEST(AutobotTest, Ultra) {
    testing::internal::CaptureStdout();
    Autobot autobot("Bumblebee", "Model X", 200, Pilot("Pilot"), Weapon("Laser", 50), 150, 300);
    autobot.ultra();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot Bumblebee is using ultra power!\n");
}

TEST(AutobotTest, GetSpeed) {
    Pilot pilot("Optimus Prime"); 
    Weapon weapon("Blaster", 100); 
    Autobot autobot("Optimus", "Model X", 1000, pilot, weapon, 1000, 50); 
    EXPECT_EQ(autobot.getSpeed(), 1000); 
}

TEST(AutobotTest, SetSpeed) {
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    Autobot autobot("Optimus", "Model X", 1000, pilot, weapon, 1000, 50); 
    autobot.setSpeed(1500); 
    EXPECT_EQ(autobot.getSpeed(), 1500); 
}

TEST(AutobotTest, OperatorLessThan) {
    Pilot pilot1("Optimus Prime");
    Weapon weapon1("Blaster", 100);
    

	Autobot autobot1("Optimus", "Model X", 500, pilot1, weapon1, 400, 50); 

	Pilot pilot2("Megatron");
	Weapon weapon2("Cannon", 150);
	

	Autobot decepticon("Megatron", "Model Y", 600, pilot2, weapon2, 600, 100); 

	
	EXPECT_TRUE(autobot1 < decepticon); 
}

