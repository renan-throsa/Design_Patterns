//
// Created by renan on 14/08/18.
//

#include <iostream>
#include "Waiting.h"


void Waiting::apply(Budget *budget) {
    if (!Waiting::discount_applied) {
        Waiting::discount_applied = true;
        double extra_discount = budget->getValue() * 0.10;
        budget->setValue(budget->getValue() - extra_discount);
    } else {
        throw std::runtime_error("Waiting for payment. Cannot apply a discount if it has already been applied");
    }
}

void Waiting::approve(Budget *budget) {
    budget->setPayment_status(new Approved());
}

void Waiting::reject(Budget *budget) {
    budget->setPayment_status(new Denied());
}

void Waiting::conclude(Budget *budget) {
    throw std::runtime_error("Cannot conclude if it has already been Waiting");
}

std::ostream &Waiting::output(std::ostream &os) const {
    os << "Status: Waiting";
    return os;
}




