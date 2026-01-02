MoneyValue = std::uint32_t — avoids negative values, fits domain assumptions

Constructor is lightweight; invariants enforced at API boundaries

Setter returns bool on failure to avoid exceptions in hot paths