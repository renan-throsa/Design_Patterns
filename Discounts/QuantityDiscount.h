//
// Created by renan on 11/08/18.
//

#ifndef DESIGN_PATTERNS_SIMPLEDISCOUNT_H
#define DESIGN_PATTERNS_SIMPLEDISCOUNT_H


#include "Discount.h"


class QuantityDiscount : public Discount {


public:
    QuantityDiscount(Discount *);

    double CalculateDiscount(Budget *) override;

    std::ostream &output(std::ostream &) const override;

};


#endif //DESIGN_PATTERNS_SIMPLEDISCOUNT_H
