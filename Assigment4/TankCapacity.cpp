/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha3*/
#include "TankCapacity.h"

TankCapacity::TankCapacity(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int volume)
    : Transformer(name, model, power, pilot, weapon), volume(volume) {}

int TankCapacity::getVolume() const { return volume; }
void TankCapacity::setVolume(int newVolume) { volume = newVolume; }
