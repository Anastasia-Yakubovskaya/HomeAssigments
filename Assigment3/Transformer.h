#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "Pilot.h"
#include "Weapon.h"

class Transformer {
private:
    std::string name;
    std::string model;
    int power;
    Pilot& pilot; // ассоциация
    Weapon weapon; // композиция
public:
    Transformer(std::string p_name, std::string p_model, int p_power, Pilot& pilot, Weapon weapon);
    virtual ~Transformer();
    
    std::string getName() const;
    void setName(std::string newName);
    std::string getModel() const;
    void setModel(std::string newModel);
    int getPower() const;
    void setPower(int newPower);
    std::string getWeaponType() const;
    int getWeaponDamage() const;
    
    bool jump();
    bool fire();
    bool move();
};

#endif
