
#include "SuperSila2.h"
#include "Pilot.h"
#include "Weapon.h"
#include <iostream>
#include <string>

SuperSila2::SuperSila2(std::string name, std::string model, int power, const Pilot& pilot, const Weapon& weapon, int timeOfTransformation)
    : Transformer(name, model, power, pilot, weapon), timeOfTransformation(timeOfTransformation) {}

SuperSila2::SuperSila2(std::string name, std::string model, const Pilot& pilot, const Weapon& weapon, int timeOfTransformation)
    : Transformer(name, model, 100, pilot, weapon), timeOfTransformation(timeOfTransformation) {}

SuperSila2::SuperSila2(std::string name, int timeOfTransformation)
    : Transformer(name, "Unknown Model", 100, Pilot(), Weapon()), timeOfTransformation(timeOfTransformation) {}

int SuperSila2::getTimeOfTransformation() const
{
    return timeOfTransformation;
}
void SuperSila2::setTimeOfTransformation(int newTimeOfTransformation)
{
    timeOfTransformation = newTimeOfTransformation;
}

std::ostream& operator<<(std::ostream& os, const SuperSila2& superSila)
{
    os << static_cast<const Transformer&>(superSila);
    os << "\nTimeOfTransformation: " << std::to_string(superSila.getTimeOfTransformation());
    return os;
}

bool SuperSila2::operator<(const SuperSila2& other) const
{
    return timeOfTransformation < other.timeOfTransformation;
}

bool SuperSila2::operator>(const SuperSila2& other) const
{
    return timeOfTransformation > other.timeOfTransformation;
}

bool SuperSila2::operator<=(const SuperSila2& other) const
{
    return !(*this > other);
}

bool SuperSila2::operator>=(const SuperSila2& other) const
{
    return !(*this < other);
}

bool SuperSila2::operator==(const SuperSila2& other) const
{
    return timeOfTransformation == other.timeOfTransformation;
}

bool SuperSila2::operator!=(const SuperSila2& other) const
{
    return !(*this == other);
}
