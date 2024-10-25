/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha3*/
#ifndef SUPERSILA1_H
#define SUPERSILA1_H

#include "Transformer.h"

class SuperSila1 : public Transformer {
private:
    int speed;
public:
    SuperSila1(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int speed);
    int getSpeed() const;
    void setSpeed(int newSpeed);
};

#endif
