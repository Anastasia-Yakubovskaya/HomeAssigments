#ifndef TANKCAPACITY_H
#define TANKCAPACITY_H

#include "Transformer.h"

class TankCapacity : public Transformer {
private:
    int volume;
public:
    TankCapacity(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int volume);
    
    int getVolume() const;
    void setVolume(int newVolume);
    friend std::ostream& operator<<(std::ostream& os, const TankCapacity& tankCapacity);
    bool operator<(const TankCapacity& other) const;
    bool operator>(const TankCapacity& other) const;
    bool operator<=(const TankCapacity& other) const;
    bool operator>=(const TankCapacity& other) const;
    bool operator==(const TankCapacity& other) const;
    bool operator!=(const TankCapacity& other) const;
};

#endif
