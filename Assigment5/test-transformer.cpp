#include "gtest/gtest.h"
#include "MockTransformer.h" 
#include "Pilot.h" 
#include "Weapon.h"

TEST(Transformer, constructorInitializesMembers) {
    Pilot pilot("Optimus Pilot"); 
    Weapon weapon("Laser", 100); 
    MockTransformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
    
    EXPECT_EQ(transformer.getName(), "Optimus Prime");
    EXPECT_EQ(transformer.getModel(), "Meteor");
    EXPECT_EQ(transformer.getPower(), 1000);
    EXPECT_EQ(transformer.getWeaponType(), weapon.getType());
    EXPECT_EQ(transformer.getWeaponDamage(), weapon.getDamage());
}

TEST(Transformer, getName) {
    Pilot pilot("Optimus Pilot"); 
    Weapon weapon("Laser", 100); 
    MockTransformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
    
    EXPECT_EQ(transformer.getName(), "Optimus Prime");
}

TEST(Transformer, setName) {
    Pilot pilot("Optimus Pilot"); 
    Weapon weapon("Laser", 100); 
    MockTransformer transformer("Initial Name", "Model", 1000, pilot, weapon);
    
    transformer.setName("Bumblebee");
    
    EXPECT_EQ(transformer.getName(), "Bumblebee");
}

TEST(Transformer, getModel) {
   Pilot pilot("Optimus Pilot"); 
   Weapon weapon("Laser", 100); 
   MockTransformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
   
   EXPECT_EQ(transformer.getModel(), "Meteor");
}

TEST(Transformer, setModel) {
   Pilot pilot("Optimus Pilot"); 
   Weapon weapon("Laser", 100); 
   MockTransformer transformer("Initial Name", "Model", 1000, pilot, weapon);
   
   transformer.setModel("New Model");
   
   EXPECT_EQ(transformer.getModel(), "New Model");
}

TEST(Transformer, getPower) {
   Pilot pilot("Optimus Pilot"); 
   Weapon weapon("Laser", 100); 
   MockTransformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
   
   EXPECT_EQ(transformer.getPower(), 1000);
}

TEST(Transformer, setPower) {
   Pilot pilot("Optimus Pilot"); 
   Weapon weapon("Laser", 100); 
   MockTransformer transformer("Initial Name", "Model", 1000, pilot, weapon);
   
   transformer.setPower(1200);
   
   EXPECT_EQ(transformer.getPower(), 1200);
}

TEST(Transformer, getWeaponType) {
   Pilot pilot("Optimus Pilot"); 
   Weapon weapon("Laser", 100); 
   MockTransformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
   
   EXPECT_EQ(transformer.getWeaponType(), weapon.getType());  
}

TEST(Transformer, jump) {
   Pilot pilot("Optimus Pilot"); 
   Weapon weapon("Laser", 100); 
   MockTransformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
   
   EXPECT_TRUE(transformer.jump()); 
}

TEST(Transformer, fire) {
   Pilot pilot("Optimus Pilot"); 
   Weapon weapon("Laser", 100); 
   MockTransformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
   
   EXPECT_TRUE(transformer.fire()); 
}

TEST(Transformer, move) {
   Pilot pilot("Optimus Pilot"); 
   Weapon weapon("Laser", 100); 
   MockTransformer transformer("Optimus Prime", "Meteor", 1000, pilot, weapon);
   
   EXPECT_TRUE(transformer.move()); 
}

TEST(Transformer, destructorCalled) {
   MockTransformer* mockTransformer = new MockTransformer(); 
   
   EXPECT_FALSE(mockTransformer->destructorCalled); 
   
   delete mockTransformer;
   
   EXPECT_TRUE(mockTransformer->destructorCalled); 
}

