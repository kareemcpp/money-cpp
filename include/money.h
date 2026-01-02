#include <iostream> 
#include <cstdint>

using MoneyValue = uint32_t;

class Money{

    MoneyValue _valueInCents;

public:

// Constructor

    Money(const MoneyValue value);

// Getter & Setter 

    MoneyValue getMoney() const;
    bool setMoney(const MoneyValue value);
};