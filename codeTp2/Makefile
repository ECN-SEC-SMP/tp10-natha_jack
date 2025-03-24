# A mettre a jour : répertoire d'installation de Google Test
GTEST_DIR = ../googletest/googletest
GTEST_LIB = ../googletest/lib

CPP_FLAGS = -isystem $(GTEST_DIR)/include  -g -Wall -Wextra -pthread -std=c++17

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h

all: run

run: Calculator.out
	./Calculator.out

Calculator: Calculator.cpp
	g++ -c $(CPP_FLAGS) Calculator.cpp

Test: test.cpp Calculator
	g++ -c $(CPP_FLAGS) test.cpp

Calculator.out: Test
	g++ $(CPP_FLAGS) -o Calculator.out Calculator.o test.o -lpthread $(GTEST_LIB)/libgtest.a $(GTEST_LIB)/libgtest_main.a


