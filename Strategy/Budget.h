//
// Created by renan on 10/08/18.
//

#ifndef DESIGN_PATTERNS_BUDGET_H
#define DESIGN_PATTERNS_BUDGET_H


#include "Taxation.h"

class Budget {
public:
    Budget(int, Taxation *);

    int getValue() const;

    double operation() const;

    void setTaxation(Taxation *taxation);

    Taxation *getTaxation() const;

private:
    int value;
    Taxation *taxation;
};


#endif //DESIGN_PATTERNS_BUDGET_H
