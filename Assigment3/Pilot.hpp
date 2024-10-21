#ifndef PILOT_HPP
#define PILOT_HPP

#include <string>

class Pilot {
private:
    std::string name;
public:
    Pilot(std::string name);
    std::string getName() const;
    void setName(std::string newName);
};

#endif
