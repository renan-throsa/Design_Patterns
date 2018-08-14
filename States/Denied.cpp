//
// Created by renan on 14/08/18.
//

#include "Denied.h"

void Denied::analyze(Budget *budget) {
    double extra_discount = budget->getValue() * 0.00;
    budget->setValue(budget->getValue() - extra_discount);
}

std::ostream &Denied::output(std::ostream &os) const {
    os << "Status: Waiting";
    return os;
}
