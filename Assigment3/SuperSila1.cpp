#include "SuperSila1.h"

SuperSila1::SuperSila1(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int speed)
    : Transformer(name, model, power, pilot, weapon), speed(speed) {}

int SuperSila1::getSpeed() const { return speed; }
void SuperSila1::setSpeed(int newSpeed) { speed = newSpeed; }
