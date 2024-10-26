#ifndef PILOT_H
#define PILOT_H

#include <string>

class Pilot {
private:
    std::string name;
public:
    Pilot(); // Конструктор по умолчанию
    Pilot(std::string name); // Конструктор с параметрами
    std::string getName() const; // Метод для получения имени
    void setName(std::string newName); // Метод для установки имени
};

#endif 
