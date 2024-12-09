/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha5*/
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
private:
    int timeOfTransformation; 
public:
    Decepticon(std::string name, std::string model, int power, const Pilot& pilot, const Weapon& weapon, int timeOfTransformation); 
    Decepticon(std::string name, std::string model, const Pilot& pilot, const Weapon& weapon, int timeOfTransformation);
    Decepticon(std::string name, int timeOfTransformation);
    
    
    void transform() override;
    void openFire() override;
    void ultra() override;
    
    int getTimeOfTransformation() const;
    void setTimeOfTransformation(int newTimeOfTransformation);
    friend std::ostream& operator<<(std::ostream& os, const Decepticon& superSila);
    bool operator<(const Decepticon& other) const;
    bool operator>(const Decepticon& other) const;
    bool operator<=(const Decepticon& other) const;
    bool operator>=(const Decepticon& other) const;
    bool operator==(const Decepticon& other) const;
    bool operator!=(const Decepticon& other) const;
};

#endif 
