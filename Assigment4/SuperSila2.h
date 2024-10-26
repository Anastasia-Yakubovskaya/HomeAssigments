#ifndef SUPERSILA2_H
#define SUPERSILA2_H

#include "Transformer.h"

class SuperSila2 : public Transformer {
private:
    int timeOfTransformation; 
public:
    SuperSila2(std::string name, std::string model, int power, const Pilot& pilot, const Weapon& weapon, int timeOfTransformation); 
    SuperSila2(std::string name, std::string model, const Pilot& pilot, const Weapon& weapon, int timeOfTransformation);
    SuperSila2(std::string name, int timeOfTransformation);
    
    int getTimeOfTransformation() const;
    void setTimeOfTransformation(int newTimeOfTransformation);
    friend std::ostream& operator<<(std::ostream& os, const SuperSila2& superSila);
        bool operator<(const SuperSila2& other) const;
    bool operator>(const SuperSila2& other) const;
    bool operator<=(const SuperSila2& other) const;
    bool operator>=(const SuperSila2& other) const;
    bool operator==(const SuperSila2& other) const;
    bool operator!=(const SuperSila2& other) const;
};

#endif 
