/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha3*/
#include "SuperSila2.h"
#include "Pilot.h"
#include "Weapon.h"


SuperSila2::SuperSila2(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int timeOfTransformation)
    : Transformer(name, model, power, pilot, weapon), timeOfTransformation(timeOfTransformation) {}

int SuperSila2::getTimeOfTransformation() const { return timeOfTransformation; }
void SuperSila2::setTimeOfTransformation(int newTimeOfTransformation) { timeOfTransformation = newTimeOfTransformation; }
