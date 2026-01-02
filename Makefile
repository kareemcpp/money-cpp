CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude

money_test: bin	src/money.cpp tests/money_test.cpp
	$(CXX) $(CXXFLAGS) -o bin/money_test src/money.cpp tests/money_test.cpp

clean:
	rm -f bin/*