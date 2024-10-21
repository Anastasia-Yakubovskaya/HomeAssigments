#ifndef SUPERSILA2_HPP
#define SUPERSILA2_HPP

#include "Transformer.hpp"

class SuperSila2 : public Transformer {
private:
    int timeOfTransformation; 
public:
    SuperSila2(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int timeOfTransformation);
    int getTimeOfTransformation() const;
    void setTimeOfTransformation(int newTimeOfTransformation);
};

#endif
