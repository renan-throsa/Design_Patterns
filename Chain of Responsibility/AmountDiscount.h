//
// Created by renan on 11/08/18.
//

#ifndef DESIGN_PATTERNS_SPECIALDISCOUNT_H
#define DESIGN_PATTERNS_SPECIALDISCOUNT_H

#include <ostream>

template<class Discount>
class AmountDiscount {
    friend std::ostream &operator<<(std::ostream &, const AmountDiscount &);

public:
    AmountDiscount(Discount *);

    double CalculateDiscount(Discount *);

private:
    Discount next;
};


#endif //DESIGN_PATTERNS_SPECIALDISCOUNT_H
