#include "Pilot.h"

Pilot::Pilot(std::string name) : name(name) {}

std::string Pilot::getName() const {
    return name;
}

void Pilot::setName(std::string newName) {
    name = newName;
}
