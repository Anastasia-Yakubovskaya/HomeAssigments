#include "Autobot.h"
#include <iostream>


Autobot::Autobot(std::string name, std::string model, int power, const Pilot& pilot, Weapon weapon, int volume, int specialPower)
    : Transformer(name, model, power, pilot, weapon), speed(volume), specialPower(specialPower) {
}

Autobot::Autobot(std::string name, std::string model, const Pilot& pilot, Weapon weapon, int volume, int specialPower)
    : Transformer(name, model, 100, pilot, weapon), speed(volume), specialPower(specialPower) {
}

Autobot::Autobot(std::string name, int volume, int specialPower)
    : Transformer(name, "Unknown Model", 100, Pilot(), Weapon()), speed(volume), specialPower(specialPower) {
}

void Autobot::transform() {
    std::cout << "Autobot " << name << " is transforming!" << std::endl;
}

void Autobot::openFire() {
    std::cout << "Autobot " << name << " is opening fire!" << std::endl;
}

void Autobot::ultra() {
    std::cout << "Autobot " << name << " is using ultra power!" << std::endl;
}

int Autobot::getSpeed() const { return speed; }
void Autobot::setSpeed(int newSpeed) { speed = newSpeed; }

std::ostream& operator<<(std::ostream& os, const Autobot& superSila) {
    os << static_cast<const Transformer&>(superSila);
    os << "\nSpeed: " << superSila.getSpeed() << "\nSpecial Power: " << superSila.specialPower; 
    return os;
}

bool Autobot::operator<(const Autobot& other) const {
    return this->speed < other.speed; 
}

bool Autobot::operator>(const Autobot& other) const {
    return this->speed > other.speed; 
}


bool Autobot::operator<=(const Autobot& other) const {
    return !(*this > other);
}

bool Autobot::operator>=(const Autobot& other) const {
    return !(*this < other);
}

bool Autobot::operator==(const Autobot& other) const {
    return this->speed == other.speed && this->specialPower == other.specialPower; 
}

bool Autobot::operator!=(const Autobot& other) const {
    return !(*this == other);
}

