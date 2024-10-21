#include "gtest/gtest.h"
#include "Transformer.h"
#include "Pilot.h" 
#include "Weapon.h"


TEST(Transformer, getName) {
    Pilot pilot("Optimus Pilot"); 
    Weapon weapon("Laser", 100); 
    Transformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
    EXPECT_EQ(transformer.getName(), "Optimus Prime");
}

TEST(Transformer, setName) {
    Pilot pilot("Optimus Pilot"); 
    Weapon weapon("Laser", 100); 
    Transformer transformer("Initial Name", "Model", 1000, pilot, weapon);
    transformer.setName("Bumblebee");
    EXPECT_EQ(transformer.getName(), "Bumblebee");
}

TEST(Transformer, getModel) {
    Pilot pilot("Optimus Pilot"); 
    Weapon weapon("Laser", 100); 
    Transformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
    EXPECT_EQ(transformer.getModel(), "Meteor");
}

TEST(Transformer, setModel) {
    Pilot pilot("Optimus Pilot"); 
    Weapon weapon("Laser", 100); 
    Transformer transformer("Initial Name", "Model", 1000, pilot, weapon);
    transformer.setModel("New Model");
    EXPECT_EQ(transformer.getModel(), "New Model");
}

TEST(Transformer, getPower) {
    Pilot pilot("Optimus Pilot"); 
    Weapon weapon("Laser", 100); 
    Transformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
    EXPECT_EQ(transformer.getPower(), 1000);
}

TEST(Transformer, setPower) {
    Pilot pilot("Optimus Pilot"); 
    Weapon weapon("Laser", 100); 
    Transformer transformer("Initial Name", "Model", 1000, pilot, weapon);
    transformer.setPower(1200);
    EXPECT_EQ(transformer.getPower(), 1200);
}

TEST(Transformer, getWeaponType) {
    Pilot pilot("Optimus Pilot"); 
    Weapon weapon("Laser", 100); 
    Transformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
    EXPECT_EQ(transformer.getWeaponType(), weapon.getType());  
}

TEST(Transformer, jump) {
    Pilot pilot("Optimus Pilot"); 
    Weapon weapon("Laser", 100); 
    Transformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
    EXPECT_TRUE(transformer.jump()); 
}

TEST(Transformer, fire) {
    Pilot pilot("Optimus Pilot"); 
    Weapon weapon("Laser", 100); 
    Transformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
    EXPECT_TRUE(transformer.fire()); 
}

TEST(Transformer, move) {
    Pilot pilot("Optimus Pilot"); 
    Weapon weapon("Laser", 100); 
    Transformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
    EXPECT_TRUE(transformer.move()); 
}
