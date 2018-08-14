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

    double CalculateDiscount(Budget *) override;
    std::ostream &output(std::ostream &) const override;

};


#endif //DESIGN_PATTERNS_PREMIUMDISCOUNT_H
