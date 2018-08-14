//
// Created by renan on 14/08/18.
//

#include "Denied.h"

void Denied::analyze(Budget *budget) {
    throw std::invalid_argument("Cannot apply a discount on denied budget.");
}


std::ostream &Denied::output(std::ostream &os) const {
    os << "Status: Waiting";
    return os;
}
