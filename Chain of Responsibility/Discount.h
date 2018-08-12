//
// Created by renan on 11/08/18.
//

#ifndef DESIGN_PATTERNS_DISCOUNT_H
#define DESIGN_PATTERNS_DISCOUNT_H

#include <ostream>
#include <iostream>
#include "../base/Budget.h"

class Discount {
    friend std::ostream &operator<<(std::ostream &os, const Discount &discount) {
        return discount.output(os);
    }


public:

    Discount(Discount *);

    virtual double CalculateDiscount(Budget *) = 0;

    virtual std::ostream &output(std::ostream &os) const = 0;

protected:
    Discount *next;
};


#endif //DESIGN_PATTERNS_DISCOUNT_H
