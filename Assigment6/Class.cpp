#include "Class.h"

template <class T>
bool MyClass<T>:: foo ()
{
    return instance.bar(number, vec);
}

template <>
bool MyClass<int>:: foo ()
{
    return true;
}

template <>
bool MyClass<float>:: foo ()
{
    return false;
}








/* Class1 {
public:
    bool bar(int num, const std::vector<float>&) {
        return num > 0;
    }

    int c_i_1() { return 1; }
    float c_i_2() { return 1.0f; }
    void c_i_3() {}
};

class Class2 {
public:
    bool bar(int, const std::vector<float>& vec) {
        return !vec.empty();
    }

    int c_i_1() { return 2; }
    float c_i_2() { return 2.0f; }
    void c_i_3() {}
};

class Class3 {
public:
    bool bar(int num, const std::vector<float>& vec) {
        return num == -static_cast<int>(vec.size());
    }

    int c_i_1() { return 3; }
    float c_i_2() { return 3.0f; }
    void c_i_3() {}
};*/

