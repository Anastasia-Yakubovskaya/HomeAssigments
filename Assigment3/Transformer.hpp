#ifndexf TRANSFORMER_HPP
#define TRANSFORMER_HPP

#include <string>
#include "Pilot.hpp"
#include "Weapon.hpp"

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
    
    void jump();
    void fire();
    void move();
};

#endif
