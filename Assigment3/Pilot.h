#ifndef PILOT_H
#define PILOT_H

#include <string>

class Pilot {
private:
    std::string name;
public:
    Pilot();
    Pilot(std::string name);
    std::string getName() const;
    void setName(std::string newName);
};

#endif
