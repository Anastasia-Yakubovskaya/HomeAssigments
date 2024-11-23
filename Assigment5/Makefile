CXX = g++
CXXFLAGS = -I. -std=c++17 -g -fPIC -Wall -Werror -Wpedantic -O2

TARGET = myProg
SRCS = main.cpp Transformer.cpp Pilot.cpp Autobot.cpp Decepticon.cpp TankCapacity.cpp Weapon.cpp
OBJS = $(SRCS:.cpp=.o)


TEST_TARGETS = testtransformer testpilot testweapon testAutobot testDecepticon testtankcapacity
TEST_SRCS = test-transformer.cpp test-pilot.cpp test-weapon.cpp test-Autobot.cpp test-Decepticon.cpp test-tankcapacity.cpp
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

all: $(TARGET)


$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


testtransformer: test-transformer.o Transformer.o Weapon.o Pilot.o
	$(CXX) test-transformer.o Transformer.o Weapon.o Pilot.o -o $@ -lgtest -lgtest_main -pthread

testpilot: test-pilot.o Pilot.o
	$(CXX) test-pilot.o Pilot.o -o $@ -lgtest -lgtest_main -pthread

testweapon: test-weapon.o Weapon.o
	$(CXX) test-weapon.o Weapon.o -o $@ -lgtest -lgtest_main -pthread

testAutobot: test-Autobot.o Autobot.o Transformer.o Weapon.o Pilot.o
	$(CXX) test-Autobot.o Autobot.o Transformer.o Weapon.o Pilot.o -o $@ -lgtest -lgtest_main -pthread

testDecepticon: test-Decepticon.o Decepticon.o Transformer.o Weapon.o Pilot.o
	$(CXX) test-Decepticon.o Decepticon.o Transformer.o Weapon.o Pilot.o -o $@ -lgtest -lgtest_main -pthread

testtankcapacity: test-tankcapacity.o TankCapacity.o Transformer.o Weapon.o Pilot.o
	$(CXX) test-tankcapacity.o TankCapacity.o Transformer.o Weapon.o Pilot.o -o $@ -lgtest -lgtest_main -pthread


%.o: %.cpp
	$(CXX) -c $< -o $@


all_tests: $(TEST_TARGETS)

clean:
	rm -f $(TARGET) *.o $(TEST_TARGETS)
