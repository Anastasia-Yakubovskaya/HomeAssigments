/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha5*/
#include "TankCapacity.h"
#include <iostream>

TankCapacity::TankCapacity(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int volume)
    : Transformer(name, model, power, pilot, weapon), volume(volume) {}


TankCapacity::TankCapacity(std::string name, std::string model, Pilot& pilot, Weapon weapon, int volume)
    : Transformer(name, model, 100, pilot, weapon), volume(volume) { 
}

TankCapacity::TankCapacity(std::string name, int volume)
    : Transformer(name, "Unknown Model", 100, Pilot(), Weapon()), volume(volume) { 

}

void TankCapacity::transform() {
    std::cout << "TankCapacity " << name << " is transforming!" << std::endl;
}

void TankCapacity::openFire() {
    std::cout << "TankCapacity " << name << " is opening fire!" << std::endl;
}

void TankCapacity::ultra() {
    std::cout << "TankCapacity " << name << " is using ultra power!" << std::endl;
}

int TankCapacity::getVolume() const { return volume; }
void TankCapacity::setVolume(int newVolume) { volume = newVolume; }

std::ostream& operator<<(std::ostream& os, const TankCapacity& tankCapacity) {
    os << static_cast<const Transformer&>(tankCapacity);  
    os << "\nVolume: " << tankCapacity.getVolume();  
    return os;  
}

bool TankCapacity::operator<(const TankCapacity& other) const {
    return volume < other.volume; 
}

bool TankCapacity::operator>(const TankCapacity& other) const {
    return volume > other.volume; 
}

bool TankCapacity::operator<=(const TankCapacity& other) const {
    return !(*this > other); 
}

bool TankCapacity::operator>=(const TankCapacity& other) const {
    return !(*this < other); 
}

bool TankCapacity::operator==(const TankCapacity& other) const {
    return volume == other.volume; 
}

bool TankCapacity::operator!=(const TankCapacity& other) const {
    return !(*this == other); 
}
