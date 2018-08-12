//
// Created by renan on 11/08/18.
//

#ifndef DESIGN_PATTERNS_PREMIUMDISCOUNT_H
#define DESIGN_PATTERNS_PREMIUMDISCOUNT_H

#include <ostream>
#include "Discount.h"


class SpecialDiscount : public Discount {


public:
    SpecialDiscount(Discount *);

    virtual double CalculateDiscount(Budget *);
    virtual std::ostream &output(std::ostream &) const;

};


#endif //DESIGN_PATTERNS_PREMIUMDISCOUNT_H
