#include "gtest/gtest.h"
#include "Class.h"
#include <vector>

TEST(Class1Test, BarTrue) {
    Class1 class1;
    EXPECT_TRUE(class1.bar(5, {})); // true, так как 5 > 0
}

TEST(Class1Test, BarFalse) {
    Class1 class1;
    EXPECT_FALSE(class1.bar(-5, {})); // false, так как -5 <= 0
}

TEST(Class2Test, BarTrue) {
    Class2 class2;
    std::vector<float> vec = {1.0f};
    EXPECT_TRUE(class2.bar(0, vec)); // true, вектор не пустой
}

TEST(Class2Test, BarFalse) {
    Class2 class2;
    std::vector<float> vec = {};
    EXPECT_FALSE(class2.bar(0, vec)); // false, вектор пустой
}

TEST(Class3Test, BarTrue) {
    Class3 class3;
    std::vector<float> vec(5); // Вектор размера 5
    EXPECT_TRUE(class3.bar(-5, vec)); // true, -5 == -size(vec)
}

TEST(Class3Test, BarFalse) {
    Class3 class3;
    std::vector<float> vec(4); // Вектор размера 4
    EXPECT_FALSE(class3.bar(-5, vec)); // false, -5 != -size(vec)
}

// Тесты на частичные специализации
TEST(MyTemplateClassIntTest, FooAlwaysTrue) {
    MyTemplateClass<int> intTest(Class1(), 10, {});
    EXPECT_TRUE(intTest.foo()); // Должен вернуть true
}

TEST(MyTemplateClassDoubleTest, FooAlwaysFalse) {
    MyTemplateClass<double> doubleTest(10.0);
    EXPECT_FALSE(doubleTest.foo()); // Должен вернуть false
}

