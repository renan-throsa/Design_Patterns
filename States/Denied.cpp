//
// Created by renan on 14/08/18.
//

#include "Denied.h"
#include "Approved.h"
#include "Finished.h"


void Denied::apply(Budget *budget) {
    throw std::runtime_error("Cannot apply a discount if it has already been denied");
}


void Denied::approve(Budget *budget) {
    throw std::runtime_error("Cannot approve a discount if it has already been Denied");
}

void Denied::reject(Budget *budget) {
    throw std::runtime_error("Cannot reject if it has already been rejected");
}

void Denied::conclude(Budget *budget) {
    budget->setPayment_status(new Finished());
}

std::ostream &Denied::output(std::ostream &os) const {
    os << "Status: Denied";
    return os;
}

