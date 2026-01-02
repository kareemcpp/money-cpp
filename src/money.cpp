#include <cstdint>
#include <stdexcept>
#include "money.h"

// Constructor

Money::Money(const MoneyValue value): _valueInCents(value){
    if(value > MAX_VALUE_IN_CENTS){
        throw std::overflow_error("Money value exceeds maximum allowed limit");
    }
}

// Getter & Setter 

MoneyValue Money::getMoney() const {return _valueInCents;}

bool Money::setMoney(const MoneyValue value){
    if(value > MAX_VALUE_IN_CENTS){
        return false;
    }
    _valueInCents = value;
    return true;
}