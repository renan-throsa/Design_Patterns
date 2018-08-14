//
// Created by renan on 14/08/18.
//

#include "Waiting.h"


void Waiting::apply(Budget *budget) {
    double extra_discount = budget->getValue() * 0.02;
    budget->setValue(budget->getValue() - extra_discount);
}


void Waiting::pass(Budget *budget) {
    budget->setPayment_status(new Approved())
}

void Waiting::reject(Budget *budget) {
    budget->setPayment_status(new Denied())
}

void Waiting::conclude(Budget *budget) {
    std::runtime_error("Cannot conclude before denying it");
}

std::ostream &Waiting::output(std::ostream &os) const {
    os << "Status: Waiting";
    return os;
}




