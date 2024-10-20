#include <iostream>
#include <string>

class Pilot {
private:
    std::string name;
public:
    Pilot(std::string name) : name(name) {}
    std::string getName() const {
        return name;
    }
    void setName(std::string newName) {
        name = newName;
    }
};

class Weapon {
private:
    std::string type;
    int damage;
public:
    Weapon(std::string type, int damage) : type(type), damage(damage) {}
    std::string getType() const {
        return type;
    }
    int getDamage() const {
        return damage;
    }
};

class Transformer {
private:
    std::string name;
    std::string model;
    int power;
    Pilot& pilot; // ассоциация
    Weapon weapon; // композиция
public:
    Transformer(std::string p_name, std::string p_model, int p_power, Pilot& pilot, Weapon weapon) 
        : name(p_name), model(p_model), power(p_power), pilot(pilot), weapon(weapon) {}
    
    ~Transformer() {
        std::cout << name << " is being destroyed." << std::endl;
    }
    
    std::string getName() const { return name; }
    void setName(std::string newName) { name = newName; }

    std::string getModel() const { return model; }
    void setModel(std::string newModel) { model = newModel; }

    int getPower() const { return power; }
    void setPower(int newPower) { power = newPower; }

    std::string getWeaponType() const {
        return weapon.getType();
    }
    int getWeaponDamage() const {
        return weapon.getDamage();
    }
    
    void jump() {
	return;
   }
   void fire() {
	return;
   }

  void move() {
	return;
  }
};

class SuperSila1 : public Transformer {
private:
    int speed;
public:
    SuperSila1(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int speed)
        : Transformer(name, model, power, pilot, weapon), speed(speed) {}

    int getSpeed() const { return speed; }
    void setSpeed(int newSpeed) { speed = newSpeed; }
};

class SuperSila2 : public Transformer {
private:
    int timeOfTransformation; 
public:
    SuperSila2(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int timeOfTransformation)
        : Transformer(name, model, power, pilot, weapon), timeOfTransformation(timeOfTransformation) {}

    int getTimeOfTransformation() const { return timeOfTransformation; }
    void setTimeOfTransformation(int newTimeOfTransformation) { timeOfTransformation = newTimeOfTransformation; }
};

class TankCapacity : public Transformer {
private:
    int volume;
public:
    TankCapacity(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int volume)
        : Transformer(name, model, power, pilot, weapon), volume(volume) {}

    int getVolume() const { return volume; }
    void setVolume(int newVolume) { volume = newVolume; }
};

int main() {
    Pilot pilot1("Optimus Prime");
    Pilot pilot2("Megatron");

    Weapon weapon1("pistolet", 101010);
    Weapon weapon2("blaster", 455);
    Weapon weapon3("laser", 6967);

    SuperSila1 optimusprime("Optimus Prime", "AO-1", 1000, pilot1, weapon1, 60);
    SuperSila2 megatron("Megatron", "DM-2", 1200, pilot2, weapon2, 80); 
    TankCapacity bumblebee("Bumblebee", "VW-1", 700, pilot1, weapon3, 60); 

    std::cout << optimusprime.getName() << optimusprime.getSpeed() 
              << optimusprime.getWeaponType() 
              << optimusprime.getWeaponDamage() << std::endl;

    std::cout << megatron.getName() << megatron.getTimeOfTransformation() 
              <<  megatron.getWeaponType() 
              <<  megatron.getWeaponDamage() << std::endl;

    std::cout << bumblebee.getName() << bumblebee.getVolume() 
              << bumblebee.getWeaponType() 
              <<  bumblebee.getWeaponDamage() << std::endl;
    
    return 0;
}
