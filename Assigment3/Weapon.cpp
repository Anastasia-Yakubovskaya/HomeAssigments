#include "Weapon.hpp"

Weapon::Weapon(std::string type, int damage) : type(type), damage(damage) {}

std::string Weapon::getType() const {
    return type;
}

int Weapon::getDamage() const {
    return damage;
}
