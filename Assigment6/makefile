PROJECT = myProg


LIBPROJECT = lib$(PROJECT).a 

CXX = g++ 
AR = ar 
AFLAGS = rsv 
CCXFLAGS = -I. -std=c++17 -Werror -Wpedantic -Wall -g -fPIC 


LDXXFLAGS = $(CCXFLAGS) -L. -l:$(LIBPROJECT) 
LDGTESTFLAGS = $(LDXXFLAGS) -lgtest -lgtest_main -lpthread 

DEPS = $(wildcard *.h) 
SOURCES = main.cpp 13Classes.cpp
OBJ = $(SOURCES:.cpp=.o) 


TEST_SOURCES = Tests.cpp 
TEST_OBJ = $(TEST_SOURCES:.cpp=.o) 

.PHONY: default all clean test 


default: all 

%.o: %.cpp $(DEPS) 
	$(CXX) $(CCXFLAGS) -c -o $@ $< 


$(LIBPROJECT): $(OBJ)
	$(AR) $(AFLAGS) $@ $^ 


$(PROJECT): main.o $(LIBPROJECT)
	$(CXX) -o $@ main.o $(LDXXFLAGS)

test: $(LIBPROJECT) $(TEST_OBJ)
	$(CXX) -o test-all $(TEST_OBJ) $(LDGTESTFLAGS)


all: $(PROJECT) test 


clean:
	rm -f *.o 
	rm -f $(PROJECT) 
	rm -f $(LIBPROJECT) 
	rm -f test-all
