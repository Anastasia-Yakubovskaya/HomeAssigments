#include "Transformer.h"
#include <iostream>

Transformer::Transformer() 
    : name("Default Transformer"), 
      model("Default Model"), 
      power(0), 
      pilot(Pilot("Default Pilot")), 
      weapon(Weapon("Default Weapon", 0)) {}

Transformer::Transformer(std::string p_name, std::string p_model, int p_power, const Pilot& pilot, const Weapon& weapon)
    : name(p_name), model(p_model), power(p_power), pilot(pilot), weapon(weapon) {}

Transformer::~Transformer() {
    std::cout << name << " is being destroyed." << std::endl;
}

std::string Transformer::getName() const { return name; }
void Transformer::setName(std::string newName) { name = newName; }
std::string Transformer::getModel() const { return model; }
void Transformer::setModel(std::string newModel) { model = newModel; }
int Transformer::getPower() const { return power; }
void Transformer::setPower(int newPower) { power = newPower; }
std::string Transformer::getWeaponType() const { return weapon.getType(); }
int Transformer::getWeaponDamage() const { return weapon.getDamage(); }

bool Transformer::jump() { return true; }
bool Transformer::fire() { return true; }
bool Transformer::move() { return true; }

std::ostream& operator<<(std::ostream& os, const Transformer& transformer) {
    os << "Transformer Name: " << transformer.getName() << "\n"
       << "Model: " << transformer.getModel() << "\n"
       << "Power: " << transformer.getPower() << "\n"
       << "Pilot: " << transformer.pilot.getName() << "\n"
       << "Weapon: " << transformer.getWeaponType() << ", Damage: " << transformer.getWeaponDamage();
    return os;
}
