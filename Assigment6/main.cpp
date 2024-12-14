#include <iostream>
#include "gtest/gtest.h"

// Объявление тестов (включая все тесты из test_MyTemplateClass.cpp)
extern "C" void run_tests();

int main(int argc, char **argv) {
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}

