//
// Created by renan on 14/08/18.
//

#include "Finished.h"
#include "Denied.h"
#include "Approved.h"


void Finished::apply(Budget *budget) {
    throw std::runtime_error("Cannot apply a discount if it has already been finished");
}


void Finished::approve(Budget *budget) {
    throw std::runtime_error("Cannot approve if it has already been finished");
}

void Finished::reject(Budget *budget) {
    throw std::runtime_error("Cannot reject if it has already been finished");
}

void Finished::conclude(Budget *budget) {
    throw std::runtime_error("Cannot finish if it has already been finished");
}

std::ostream &Finished::output(std::ostream &os) const {
    os << "Status: Finished";
    return os;
}
