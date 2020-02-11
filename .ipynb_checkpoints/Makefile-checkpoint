CXX = g++
CXXFLAGS = -std=c++17 -Wall 
 
all: test

test: test.cpp functions_to_implement.o
	$(CXX) $(CXXFLAGS) test.cpp functions_to_implement.o -o test
    
functions_to_implement.o: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) functions_to_implement.cpp

clean:
	rm test