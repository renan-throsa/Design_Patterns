//
// Created by renan on 14/08/18.
//

#include "Finished.h"

void Finished::apply(Budget *budget) {
    double extra_discount = budget->getValue() * 0.02;
    budget->setValue(budget->getValue() - extra_discount);
}


void Finished::pass(Budget *budget) {
    budget->setPayment_status(new Approved())
}

void Finished::reject(Budget *budget) {
    budget->setPayment_status(new Denied())
}

void Finished::conclude(Budget *budget) {
    std::runtime_error("Cannot conclude before denying it");
}

std::ostream &Finished::output(std::ostream &os) const {
    os << "Status: Finished";
    return os;
}
