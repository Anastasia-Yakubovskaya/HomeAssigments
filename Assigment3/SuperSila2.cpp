#include "SuperSila2.hpp"

SuperSila2::SuperSila2(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int timeOfTransformation)
    : Transformer(name, model, power, pilot, weapon), timeOfTransformation(timeOfTransformation) {}

int SuperSila2::getTimeOfTransformation() const { return timeOfTransformation; }
void SuperSila2::setTimeOfTransformation(int newTimeOfTransformation) { timeOfTransformation = newTimeOfTransformation; }
