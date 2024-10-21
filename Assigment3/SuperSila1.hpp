#ifndef SUPERSILA1_HPP
#define SUPERSILA1_HPP

#include "Transformer.hpp"

class SuperSila1 : public Transformer {
private:
    int speed;
public:
    SuperSila1(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int speed);
    int getSpeed() const;
    void setSpeed(int newSpeed);
};

#endif
