/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha3*/
#include "gtest/gtest.h"
#include "SuperSila2.h"
#include "Pilot.h"
#include "Weapon.h"

TEST(SuperSila2, Initialization)
{
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    SuperSila2 supersila2("Optimus", "Model X", 1000, pilot, weapon, 20);
    EXPECT_EQ(supersila2.getTimeOfTransformation(), 20);
}


TEST(SuperSila2, ModifyTimeOfTransformation)
{
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    SuperSila2 supersila2("Optimus", "Model X", 1000, pilot, weapon, 30);
    supersila2.setTimeOfTransformation(25);
    EXPECT_EQ(supersila2.getTimeOfTransformation(), 25);
}


TEST(SuperSila2, OperatorLessThan)
{
    Pilot pilot1("Optimus Prime");
    Weapon weapon1("Blaster", 100);
    SuperSila2 supersila1("Optimus", "Model X", 1000, pilot1, weapon1, 15);

    Pilot pilot2("Megatron");
    Weapon weapon2("Cannon", 150);
    SuperSila2 supersila2("Megatron", "Model Y", 600, pilot2, weapon2, 25);

    EXPECT_TRUE(supersila1 < supersila2);
}


TEST(SuperSila2, OperatorGreaterThan)
{
    Pilot pilot1("Optimus Prime");
    Weapon weapon1("Blaster", 100);
    SuperSila2 supersila1("Optimus", "Model X", 1000, pilot1, weapon1, 30);

    Pilot pilot2("Megatron");
    Weapon weapon2("Cannon", 150);
    SuperSila2 supersila2("Megatron", "Model Y", 600, pilot2, weapon2, 20);

    EXPECT_TRUE(supersila1 > supersila2);
}


TEST(SuperSila2, OperatorEquals)
{
    Pilot pilot1("Optimus Prime");
    Weapon weapon1("Blaster", 100);
    SuperSila2 supersila1("Optimus", "Model X", 1000, pilot1, weapon1, 15);

    Pilot pilot2("Megatron");
    Weapon weapon2("Cannon", 150);
    SuperSila2 supersila2("Megatron", "Model Y", 600, pilot2, weapon2, 15);

    EXPECT_TRUE(supersila1 == supersila2);
}

TEST(SuperSila2, GetTimeOfTransformation)
{
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    SuperSila2 supersila2("Optimus", "Model X", 1000, pilot, weapon, 10);


    EXPECT_EQ(supersila2.getTimeOfTransformation(), 10);
}


TEST(SuperSila2, SetTimeOfTransformation)
{
    Pilot pilot("Optimus Prime");
    Weapon weapon("Blaster", 100);
    SuperSila2 supersila2("Optimus", "Model X", 1000, pilot, weapon, 20);


    supersila2.setTimeOfTransformation(15);

    EXPECT_EQ(supersila2.getTimeOfTransformation(), 15);
}


TEST(SuperSila2, OperatorNotEquals)
{
    Pilot pilot1("Optimus Prime");
    Weapon weapon1("Blaster", 100);
    SuperSila2 supersila1("Optimus", "Model X", 1000, pilot1, weapon1, 15);

    Pilot pilot2("Megatron");
    Weapon weapon2("Cannon", 150);
    SuperSila2 supersila2("Megatron", "Model Y", 600, pilot2, weapon2, 20);

    EXPECT_TRUE(supersila1 != supersila2);
}


TEST(SuperSila2, OperatorLessThanOrEqual)
{
    Pilot pilot1("Optimus Prime");
    Weapon weapon1("Blaster", 100);
    SuperSila2 supersila1("Optimus", "Model X", 1000, pilot1, weapon1, 20);

    Pilot pilot2("Megatron");
    Weapon weapon2("Cannon", 150);
    SuperSila2 supersila2("Megatron", "Model Y", 600, pilot2, weapon2, 25);

    EXPECT_TRUE(supersila1 <= supersila2);
}


TEST(SuperSila2, OperatorGreaterThanOrEqual)
{
    Pilot pilot1("Optimus Prime");
    Weapon weapon1("Blaster", 100);
    SuperSila2 supersila1("Optimus", "Model X", 1000, pilot1, weapon1, 25);

    Pilot pilot2("Megatron");
    Weapon weapon2("Cannon", 150);
    SuperSila2 supersila2("Megatron", "Model Y", 600, pilot2, weapon2, 20);

    EXPECT_TRUE(supersila1 >= supersila2);
}
