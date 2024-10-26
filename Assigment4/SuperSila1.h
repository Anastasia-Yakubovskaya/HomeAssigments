#ifndef SUPERSILA1_H
#define SUPERSILA1_H

#include "Transformer.h"
#include <string>

class SuperSila1 : public Transformer {
private:
    int speed;
public:
    SuperSila1(std::string name, std::string model, int power, Pilot& pilot, Weapon weapon, int speed);
    int getSpeed() const;
    void setSpeed(int newSpeed);
    
    friend std::ostream& operator<<(std::ostream& os, const SuperSila1& superSila);
    bool operator<(const SuperSila1& other) const;
    bool operator>(const SuperSila1& other) const;
    bool operator<=(const SuperSila1& other) const;
    bool operator>=(const SuperSila1& other) const;
    bool operator==(const SuperSila1& other) const;
    bool operator!=(const SuperSila1& other) const;
};
#endif
