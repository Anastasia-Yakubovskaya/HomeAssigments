# Определение компилятора и флагов
CXX = g++
CXXFLAGS = -I. -std=c++17 -g -fPIC -Wall -Werror -Wpedantic -O2

# Основная цель
TARGET = myProg
SRCS = main.cpp Class.h Class.cpp 
OBJS = $(SRCS:.cpp=.o)

# Тестовые цели
TEST_TARGETS = Class Tests
TEST_SRCS = test_MyTemplateClass.cpp test-Class1.cpp test-Class2.cpp test-Class3.cpp 
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

# Основная цель по умолчанию
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Правило для создания объектных файлов из исходных файлов
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Правила для тестов
testMyTemplateClass: test_MyTemplateClass.o MyTemplateClass.o Class1.o Class2.o Class3.o 
	$(CXX) $(CXXFLAGS) $^ -o $@ -lgtest -lgtest_main -pthread

testClass1: test-Class1.o Class1.o 
	$(CXX) $(CXXFLAGS) $^ -o $@ -lgtest -lgtest_main -pthread

testClass2: test-Class2.o Class2.o 
	$(CXX) $(CXXFLAGS) $^ -o $@ -lgtest -lgtest_main -pthread

testClass3: test-Class3.o Class3.o 
	$(CXX) $(CXXFLAGS) $^ -o $@ -lgtest -lgtest_main -pthread

# Цель для сборки всех тестов
all_tests: $(TEST_TARGETS)

# Очистка объектных файлов и исполняемых файлов
clean:
	rm -f $(TARGET) *.o $(TEST_TARGETS)

