//
// Created by renan on 14/08/18.
//


#include <iostream>
#include "Approved.h"
#include "Finished.h"

void Approved::apply(Budget *budget) {
    if (Approved::discount_applied) {
        Approved::discount_applied = true;
        std::cout << discount_applied;
        double extra_discount = budget->getValue() * 0.12;
        budget->setValue(budget->getValue() - extra_discount);
    } else {
        throw std::runtime_error("Cannot apply a discount if it has already been applied.");
    }
}

void Approved::approve(Budget *budget) {
    throw std::runtime_error("Cannot approve if it has already been approved");
}

void Approved::reject(Budget *budget) {
    throw std::runtime_error("Cannot reject if it has already been approved");
}

void Approved::conclude(Budget *budget) {
    budget->setPayment_status(new Finished());
}

std::ostream &Approved::output(std::ostream &os) const {
    os << "Status: Approved";
    return os;
}
