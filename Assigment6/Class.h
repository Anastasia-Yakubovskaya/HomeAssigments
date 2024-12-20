/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha6*/
#ifndef MYCLASS_H
#define MYCLASS_H

#include <vector>

template <typename T>
class MyClass
{
private:
    T instance;
    int number;
    std::vector<float> vec;

public:
    MyClass(const T& obj, int num, const std::vector<float>& v)
        : instance(obj), number(num), vec(v) {}

    bool foo()
    {
        return instance.bar(number, vec);
    }
};

template <>
class MyClass<int>
{
private:
    int instance;
    int number;
    std::vector<float> vec;

public:
    MyClass(int obj, int num, const std::vector<float>& v)
        : instance(obj), number(num), vec(v) {}

    bool foo()
    {
        return true;
    }
};

template <>
class MyClass<double>
{
private:
    double instance;
    int number;
    std::vector<float> vec;

public:
    MyClass(double obj, int num, const std::vector<float>& v)
        : instance(obj), number(num), vec(v) {}

    bool foo()
    {
        return false;
    }
};

#endif // MYCLASS_H

