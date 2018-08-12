//
// Created by renan on 11/08/18.
//

#ifndef DESIGN_PATTERNS_TAXATIONMANAGEMENT_H
#define DESIGN_PATTERNS_TAXATIONMANAGEMENT_H


#include "../base/Budget.h"
#include "Taxation.h"

class TaxationManagement {
public:
    TaxationManagement(Taxation *);

    double performeDiscount(Budget *);

    Taxation *getTaxation();

    void setTaxation(Taxation *);

private:
    Taxation *taxation;
};


#endif //DESIGN_PATTERNS_TAXATIONMANAGEMENT_H
