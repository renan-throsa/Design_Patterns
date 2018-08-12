//
// Created by renan on 11/08/18.
//

#ifndef DESIGN_PATTERNS_SIMPLEDISCOUNT_H
#define DESIGN_PATTERNS_SIMPLEDISCOUNT_H


#include <ostream>
#include "Discount.h"


class QuantityDiscount : public Discount {


public:
    QuantityDiscount(Discount *);

    virtual double CalculateDiscount(Budget *);

    virtual std::ostream &output(std::ostream &) const;

};


#endif //DESIGN_PATTERNS_SIMPLEDISCOUNT_H
