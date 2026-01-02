#include <iostream>
#include <cassert>
#include <cstdint>
#include <limits>
#include "money.h"

    
constexpr std::uint32_t max = std::numeric_limits<std::uint32_t>::max();
constexpr std::uint32_t safeConstructorTestValue = 100; 

// Constructor-tests

void test_constructor_valid(){
    Money m(50);

    assert(m.getMoney() == 50);
    std::cout << "test_constructor_valid passed\n";
}

void test_constructor_zero_value(){
    Money m(0);
    assert(m.getMoney() == 0);

    std::cout << "test_constructor_zero_value passed\n";
}

void test_constructor_max_value(){
    Money m(max);
    assert(m.getMoney() == max);

    std::cout << "test_constructor_max_value passed\n";
}

// Setter-tests 


void test_setter_valid(){
    Money m(safeConstructorTestValue);
    m.setMoney(100);

    assert(m.getMoney() == 100);
    std::cout << "test_setter_valid passed\n";
}

void test_setter_max_value(){
    Money m(safeConstructorTestValue);
    m.setMoney(max);

    assert(m.getMoney() == max);

    std::cout << "test_setter_max_value passed\n";
}

int main(){
    test_constructor_valid();
    test_constructor_zero_value();
    test_constructor_max_value();

    test_setter_valid();
    test_setter_max_value();
}