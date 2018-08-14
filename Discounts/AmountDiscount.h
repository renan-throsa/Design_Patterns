//
// Created by renan on 11/08/18.
//

#ifndef DESIGN_PATTERNS_SPECIALDISCOUNT_H
#define DESIGN_PATTERNS_SPECIALDISCOUNT_H

#include "Discount.h"

class AmountDiscount : public Discount {

public:
    AmountDiscount(Discount *);

    double CalculateDiscount(Budget *)override;

    std::ostream &output(std::ostream &) const override;

};


#endif //DESIGN_PATTERNS_SPECIALDISCOUNT_H
