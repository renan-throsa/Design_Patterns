//
// Created by renan on 11/08/18.
//

#ifndef DESIGN_PATTERNS_PREMIUMDISCOUNT_H
#define DESIGN_PATTERNS_PREMIUMDISCOUNT_H

#include <ostream>

template<class Discount>
class SpecialDiscount {
    friend std::ostream &operator<<(std::ostream &, const SpecialDiscount &);

public:
    SpecialDiscount(Discount *);

    double CalculateDiscount(Discount *);

private:
    Discount next;
};


#endif //DESIGN_PATTERNS_PREMIUMDISCOUNT_H
