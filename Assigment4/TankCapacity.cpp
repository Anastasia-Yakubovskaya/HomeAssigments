#include "TankCapacity.h"
#include <iostream>

TankCapacity::TankCapacity(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int volume)
    : Transformer(name, model, power, pilot, weapon), volume(volume) {}

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
