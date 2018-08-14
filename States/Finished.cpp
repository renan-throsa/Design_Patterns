//
// Created by renan on 14/08/18.
//

#include "Finished.h"

void Finished::analyze(Budget *budget) {
    double extra_discount = budget->getValue() * 0.10;
    budget->setValue(budget->getValue() - extra_discount);
}

std::ostream &Finished::output(std::ostream &os) const {
    os<<"Status: Finished";
    return os;
}
