//
// Created by renan on 14/08/18.
//

#include "Waiting.h"

void Waiting::analyze(Budget *budget) {
    double extra_discount = budget->getValue() * 0.02;
    budget->setValue(budget->getValue() - extra_discount);
}

std::ostream &Waiting::output(std::ostream &os) const {
    os<<"Status: Waiting";
    return os;
}


