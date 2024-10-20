#include <iostream>
#include <string>


class Transformer 
{
private:
    std::string name;
    std::string model;
    int power;
public:
    Transformer(std::string p_name, std::string p_model, int p_power) {
        this->name = p_name;
        this->model = p_model;
        this->power = p_power;
    }
    ~Transformer () {
        std::cout << name << " is being destroyd." << std::endl;
    }
    std::string GetDescription() { return name; }
    //void setPilot (Pilot* newPilot) {pilot = newPilot;} 
};


class SuperSila1 : public Transformer
{
private:
    int speed;
public:
    SuperSila1(std:: string name, std::string model, int power, int speed) : Transformer(name, model, power) {
        this->speed = speed;
    };
    int getSpeed() { return speed;}
};


class SuperSila2 : public Transformer {
private:
    int Timeoftransformation;
public:
    SuperSila2(std:: string name, std::string model, int power, int Timeoftransformation) : Transformer (name,model,power) {
        this -> Timeoftransformation = Timeoftransformation;
    }
    int getTimeoftransformation() { return Timeoftransformation; }
};


class Tankcapacity : public Transformer {
private:
    int volume;
public:
    Tankcapacity (std:: string name, std:: string model, int power, int volume) : Transformer (name,model,power) {
        this->volume = volume;
    }
    int getVolume() { return volume; }
};
int main () {
    SuperSila1 optimusprime("Optimus Prime", "AO-1", 1000, 60);
    SuperSila2 megatron("Megatron", "DM-2", 1200, 80);
    Tankcapacity bumblebee("Bumblebee", "VW-1", 700, 60);

    std::cout << optimusprime.GetDescription() << std::endl;
    std::cout << megatron.GetDescription() << std::endl;
    std::cout << bumblebee.GetDescription() << std::endl;

    return 0;
}
