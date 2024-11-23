#ifndef Autobot_H
#define Autobot_H

#include "Transformer.h"
#include <string>

class Autobot : public Transformer {
private:
    int speed;
    int specialPower;
public:
    Autobot(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int volume, int specialPower);
    Autobot(std::string name, std::string model, Pilot& pilot, Weapon weapon, int volume, int specialPower);
    Autobot(std::string name, int volume, int specialPower);
    
    
    void transform() override;
    void openFire() override;
    void ultra() override;
    
    int getSpeed() const;
    void setSpeed(int newSpeed);
    
    friend std::ostream& operator<<(std::ostream& os, const Autobot& superSila);
    bool operator<(const Autobot& other) const;
    bool operator>(const Autobot& other) const;
    bool operator<=(const Autobot& other) const;
    bool operator>=(const Autobot& other) const;
    bool operator==(const Autobot& other) const;
    bool operator!=(const Autobot& other) const;
};

#endif
