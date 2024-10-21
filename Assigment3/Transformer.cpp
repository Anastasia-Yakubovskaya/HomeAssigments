#include "Transformer.hpp"
#include <iostream>

Transformer::Transformer(std::string p_name, std::string p_model, int p_power, Pilot& pilot, Weapon weapon) 
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

void Transformer::jump() { return; }
void Transformer::fire() { return; }
void Transformer::move() { return; }
