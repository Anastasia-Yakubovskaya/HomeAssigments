/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha3*/
#include "gtest/gtest.h"
#include "Weapon.h"


TEST(Weapon, getType) {
    Weapon weapon("Blaster", 1000); 
    EXPECT_EQ(weapon.getType(), "Blaster");
}


TEST(Weapon, getDamage) {
    Weapon weapon("Blaster", 1000); 
    EXPECT_EQ(weapon.getDamage(), 1000); 
}
