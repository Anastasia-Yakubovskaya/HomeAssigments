#include <vector>
#include <iostream>

template <class T>
class MyClass {
private:
    T instance;
    int number;
    std::vector<float> vec;
public:
    MyClass(const T obj, int num, std::vector<float>& v) : instance(obj), number(num), vec(v) {}
    
    bool foo();
};

/*template<>
class MyClass <instance int> {
    T instance;
    int number;
    std::vector<float> vec;
public:
    MyClass(const T obj, int num, std::vector<float>& v) : instance(obj), number(num), vec(v) {}
    
    bool foo();
}

template<>
class MyClass<instance double> {
    T instance;
    int number;
    std::vector<float> vec;
public:
    MyClass(const T obj, int num, std::vector<float>& v) : instance(obj), number(num), vec(v) {}
  
    bool foo();
}*/
