/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha3*/
#include "Weapon.h"
Weapon::Weapon() : type("Default Type"), damage(0) {}
Weapon::Weapon(std::string type, int damage) : type(type), damage(damage) {}

std::string Weapon::getType() const {
    return type;
}

int Weapon::getDamage() const {
    return damage;
}
