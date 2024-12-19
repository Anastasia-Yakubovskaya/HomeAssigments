PROJECT = myProg

# Библиотека проекта
LIBPROJECT = lib$(PROJECT).a 

CXX = g++ 
AR = ar 
AFLAGS = rsv 
CCXFLAGS = -I. -std=c++17 -Werror -Wpedantic -Wall -g -fPIC 

# Флаги линковки
LDXXFLAGS = $(CCXFLAGS) -L. -l:$(LIBPROJECT) 
LDGTESTFLAGS = $(LDXXFLAGS) -lgtest -lgtest_main -lpthread 

# Директории и файлы
DEPS = $(wildcard *.h) 
SOURCES = main.cpp 13Classes.cpp
OBJ = $(SOURCES:.cpp=.o) 

# Тестовые файлы
TEST_SOURCES = Tests.cpp 
TEST_OBJ = $(TEST_SOURCES:.cpp=.o) 

.PHONY: default all clean test 

# Главная цель по умолчанию
default: all 

# Правило для компиляции объектных файлов
%.o: %.cpp $(DEPS) 
	$(CXX) $(CCXFLAGS) -c -o $@ $< 

# Правило для сборки библиотеки
$(LIBPROJECT): $(OBJ)
	$(AR) $(AFLAGS) $@ $^ 

# Правило для сборки исполняемого файла проекта
$(PROJECT): main.o $(LIBPROJECT)
	$(CXX) -o $@ main.o $(LDXXFLAGS)

# Правило для тестирования
test: $(LIBPROJECT) $(TEST_OBJ)
	$(CXX) -o test-all $(TEST_OBJ) $(LDGTESTFLAGS)

# Сборка всех целей
all: $(PROJECT) test 

# Очистка временных файлов
clean:
	rm -f *.o 
	rm -f $(PROJECT) 
	rm -f $(LIBPROJECT) 
	rm -f test-all
