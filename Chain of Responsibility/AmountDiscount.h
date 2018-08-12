//
// Created by renan on 11/08/18.
//

#ifndef DESIGN_PATTERNS_SPECIALDISCOUNT_H
#define DESIGN_PATTERNS_SPECIALDISCOUNT_H

#include "Discount.h"

class AmountDiscount : public Discount {

public:
    AmountDiscount(Discount *);

    virtual double CalculateDiscount(Budget *);

    virtual std::ostream &output(std::ostream &) const;

};


#endif //DESIGN_PATTERNS_SPECIALDISCOUNT_H
