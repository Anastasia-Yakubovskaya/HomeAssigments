#include "SuperSila1.h"
#include <iostream>

SuperSila1::SuperSila1(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int volume, int specialPower)
    : Transformer(name, model, power, pilot, weapon), specialPower(specialPower), speed(0) {}

SuperSila1::SuperSila1(std::string name, std::string model, Pilot& pilot, Weapon weapon, int volume, int specialPower)
    : Transformer(name, model, 100, pilot, weapon), specialPower(specialPower), speed(0) {}

SuperSila1::SuperSila1(std::string name, int volume, int specialPower)
    : Transformer(name, "Unknown Model", 100, Pilot(), Weapon()), specialPower(specialPower), speed(0) {}

int SuperSila1::getSpeed() const { return speed; }
void SuperSila1::setSpeed(int newSpeed) { speed = newSpeed; }

std::ostream& operator<<(std::ostream& os, const SuperSila1& superSila) {
    os << static_cast<const Transformer&>(superSila);
    os << "\nSpeed: " << superSila.getSpeed() << "\nSpecial Power: " << superSila.specialPower; 
    return os;
}
