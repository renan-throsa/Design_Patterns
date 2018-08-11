//
// Created by renan on 11/08/18.
//

#ifndef DESIGN_PATTERNS_SIMPLEDISCOUNT_H
#define DESIGN_PATTERNS_SIMPLEDISCOUNT_H


#include <ostream>

template<class Discount>
class QuantityDiscount {
    friend std::ostream &operator<<(std::ostream &, const QuantityDiscount &);

public:
    QuantityDiscount(Discount *);

    double CalculateDiscount(Discount *);

private:
    Discount next;
};


#endif //DESIGN_PATTERNS_SIMPLEDISCOUNT_H
