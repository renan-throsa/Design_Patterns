//
// Created by renan on 14/08/18.
//

#include "Approved.h"

void Approved::analyze(Budget *budget) {
    double extra_discount = budget->getValue() * 0.05;
    budget->setValue(budget->getValue() - extra_discount);
}

std::ostream &Approved::output(std::ostream &os) const {
    os<<"Status: Approved";
    return os;
}
