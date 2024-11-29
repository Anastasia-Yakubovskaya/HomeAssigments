/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha3*/
#include "gtest/gtest.h"
#include "Pilot.h"

TEST(Pilot, getName)
{
    Pilot pilot("Optimus Pilot");
    EXPECT_EQ(pilot.getName(), "Optimus Pilot");
}

TEST(Pilot, setName)
{
    Pilot pilot("Optimus Pilot");
    pilot.setName("Optimus pilots");
    EXPECT_EQ(pilot.getName(), "Optimus pilots");
}
