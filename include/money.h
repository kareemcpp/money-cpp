#include <limits>
#include <cstdint>

using MoneyValue = std::uint32_t;

class Money{

    MoneyValue _valueInCents;

public:

    static constexpr std::uint32_t MAX_VALUE_IN_CENTS = std::numeric_limits<std::uint32_t>::max();

// Constructor

    Money(const MoneyValue value);

// Getter & Setter 

    MoneyValue getMoney() const;
    bool setMoney(const MoneyValue value);
};