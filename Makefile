CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: test

clean: 
	rm test.ex

test: test.cpp
	$CXX $CXXFLAGS test.cpp -o test