#include "Transformer.h"
#include <iostream>

Transformer::Transformer() : name("Default Transformer"), model("Default Model"), power(0), pilot(*(new Pilot("Default Pilot"))), weapon("Default Weapon", 0) {}
Transformer::Transformer(std::string p_name, std::string p_model, int p_power, Pilot& pil, Weapon w)
    : name(p_name), model(p_model), power(p_power), pilot(pil), weapon(w) {}



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
