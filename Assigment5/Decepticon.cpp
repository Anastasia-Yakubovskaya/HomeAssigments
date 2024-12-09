/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha5*/
#include "Decepticon.h"
#include "Pilot.h"
#include "Weapon.h"
#include <iostream>
#include <string>

Decepticon::Decepticon(std::string name, std::string model, int power, const Pilot& pilot, const Weapon& weapon, int timeOfTransformation)
    : Transformer(name, model, power, pilot, weapon), timeOfTransformation(timeOfTransformation) {}

Decepticon::Decepticon(std::string name, std::string model, const Pilot& pilot, const Weapon& weapon, int timeOfTransformation)
    : Transformer(name, model, 100, pilot, weapon), timeOfTransformation(timeOfTransformation) {}

Decepticon::Decepticon(std::string name, int timeOfTransformation)
    : Transformer(name, "Unknown Model", 100, Pilot(), Weapon()), timeOfTransformation(timeOfTransformation) {}
    
void Decepticon::transform() {
    std::cout << "Decepticon " << name << " is transforming!" << std::endl;
}

void Decepticon::openFire() {
    std::cout << "Decepticon " << name << " is opening fire!" << std::endl;
}

void Decepticon::ultra() {
    std::cout << "Decepticon " << name << " is using ultra power!" << std::endl;
}

    
int Decepticon::getTimeOfTransformation() const { return timeOfTransformation; }
void Decepticon::setTimeOfTransformation(int newTimeOfTransformation) { timeOfTransformation = newTimeOfTransformation; }

std::ostream& operator<<(std::ostream& os, const Decepticon& superSila) {
    os << static_cast<const Transformer&>(superSila); 
    os << "\nTimeOfTransformation: " << std::to_string(superSila.getTimeOfTransformation());
    return os;
}

bool Decepticon::operator<(const Decepticon& other) const {
    return timeOfTransformation < other.timeOfTransformation; 
}

bool Decepticon::operator>(const Decepticon& other) const {
    return timeOfTransformation > other.timeOfTransformation;  
}

bool Decepticon::operator<=(const Decepticon& other) const {
    return !(*this > other); 
}

bool Decepticon::operator>=(const Decepticon& other) const {
    return !(*this < other); 
}

bool Decepticon::operator==(const Decepticon& other) const {
    return timeOfTransformation == other.timeOfTransformation;  
}

bool Decepticon::operator!=(const Decepticon& other) const {
    return !(*this == other); 
}
