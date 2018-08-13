//
// Created by renan on 11/08/18.
//

#ifndef DESIGN_PATTERNS_TAXATIONMANAGEMENT_H
#define DESIGN_PATTERNS_TAXATIONMANAGEMENT_H


#include "../base/Budget.h"
#include "Taxation.h"

class TaxationManagement {
public:
    TaxationManagement();

    double performeTaxation(Budget *, Taxation *);

};


#endif //DESIGN_PATTERNS_TAXATIONMANAGEMENT_H
