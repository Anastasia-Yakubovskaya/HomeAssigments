#include <iostream>
#include <string>

class Pilot {
private:
    std::string name;
public:
    Pilot(std::string name) : name(name) {}
    std::string getName() const { return name; }
    void setName(std::string newName) { name = newName; }
};

class Transformer {
private:
    std::string name;
    std::string model;
    int power;
    Pilot* pilot;
public:
    Transformer(std::string p_name, std::string p_model, int p_power, Pilot* pilot) {
        this->name = p_name;
        this->model = p_model;
        this->power = p_power;
        this->pilot = pilot;
    }
    ~Transformer() {
        std::cout << name << " is being destroyed." << std::endl;
    }
    std::string getName() const { return name; }
    void setName(std::string newName) { name = newName; }

    std::string getModel() const { return model; }
    void setModel(std::string newModel) { model = newModel; }

    int getPower() const { return power; }
    void setPower(int newPower) { power = newPower; }
};

class SuperSila1 : public Transformer {
private:
    int speed;
public:
    SuperSila1(std::string name, std::string model, int power, Pilot* pilot, int speed) : Transformer(name, model, power, pilot) {
        this->speed = speed;
    }
    int getSpeed() const { return speed; }
    void setSpeed(int newSpeed) { speed = newSpeed; }
};

class SuperSila2 : public Transformer {
private:
    int timeOfTransformation; 
public:
    SuperSila2(std::string name, std::string model, int power, Pilot* pilot, int timeOfTransformation) : Transformer(name, model, power, pilot) {
        this->timeOfTransformation = timeOfTransformation;
    }
    int getTimeOfTransformation() const { return timeOfTransformation; }
    void setTimeOfTransformation(int newTimeOfTransformation) { timeOfTransformation = newTimeOfTransformation; }
};

class TankCapacity : public Transformer {
private:
    int volume;
public:
    TankCapacity(std::string name, std::string model, int power, Pilot* pilot, int volume) : Transformer(name, model, power, pilot) {
        this->volume = volume;
    }
    int getVolume() const { return volume; }
    void setVolume(int newVolume) { volume = newVolume; }
};

int main() {
    Pilot pilot1("Pilot1");
    Pilot pilot2("Pilot2");

    SuperSila1 optimusprime("Optimus Prime", "fff", 1000, &pilot1, 60);
    SuperSila2 megatron("Megatron", "eee", 1200, &pilot2, 80);
    TankCapacity bumblebee("Bumblebee", "Vfff", 700, &pilot1, 60); 

   
    std::cout << optimusprime.getName()  << optimusprime.getSpeed() << std::endl;
    std::cout << megatron.getName() << megatron.getTimeOfTransformation() << std::endl;
    std::cout << bumblebee.getName() << bumblebee.getVolume() << std::endl;

    return 0;
}
