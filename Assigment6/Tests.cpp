#include "gtest/gtest.h"
#include "Class.h"
#include "13Classes.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

class TestClass {
public:
    bool bar(int num, const std::vector<float>& vec) {
        return num > 0 && !vec.empty(); 
    }
};


TEST(MyClassTest, GenericClassFooReturnsTrue) {
    std::vector<float> v = {1.0f};
    TestClass obj;
    MyClass<TestClass> myClass(obj, 1, v);
    EXPECT_TRUE(myClass.foo());
}

TEST(MyClassTest, GenericClassFooReturnsFalse) {
    std::vector<float> v = {};
    TestClass obj;
    MyClass<TestClass> myClass(obj, -1, v);
    EXPECT_FALSE(myClass.foo());
}

TEST(MyClassTest, SpecializationIntFooReturnsTrue) {
    std::vector<float> emptyV;
    MyClass<int> myClass(1, 1, emptyV);
    EXPECT_TRUE(myClass.foo()); 
}

TEST(MyClassTest, SpecializationDoubleFooReturnsFalse) {
    std::vector<float> emptyV;
    MyClass<double> myClass(1.1, 1.1, emptyV);
    EXPECT_FALSE(myClass.foo()); 
}


