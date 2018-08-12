//
// Created by renan on 11/08/18.
//

#ifndef DESIGN_PATTERNS_DISCOUNTMANAGEMENT_H
#define DESIGN_PATTERNS_DISCOUNTMANAGEMENT_H


#include "Discount.h"

class DiscountManagement {
public:
    DiscountManagement(Discount *);

    double performeDiscount(Budget *);

private:
    Discount *discount;
};


#endif //DESIGN_PATTERNS_DISCOUNTMANAGEMENT_H
