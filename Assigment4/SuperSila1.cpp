
#include "SuperSila1.h"
#include <iostream>

SuperSila1::SuperSila1(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int speed)
    : Transformer(name, model, power, pilot, weapon), speed(speed) {}

int SuperSila1::getSpeed() const { return speed; }
void SuperSila1::setSpeed(int newSpeed) { speed = newSpeed; }

std::ostream& operator<<(std::ostream& os, const SuperSila1& superSila) {
    os << static_cast<const Transformer&>(superSila);
    os << "\nSpeed: " << superSila.getSpeed();
    return os;
}
bool SuperSila1::operator<(const SuperSila1& other) const {
    return speed < other.speed; 
}

bool SuperSila1::operator>(const SuperSila1& other) const {
    return speed > other.speed; 
}

bool SuperSila1::operator<=(const SuperSila1& other) const {
    return !(*this > other);
}

bool SuperSila1::operator>=(const SuperSila1& other) const {
    return !(*this < other); 
}

bool SuperSila1::operator==(const SuperSila1& other) const {
    return speed == other.speed; 
}

bool SuperSila1::operator!=(const SuperSila1& other) const {
    return !(*this == other); 
}
