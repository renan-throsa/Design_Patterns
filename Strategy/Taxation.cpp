//
// Created by renan on 10/08/18.
//

#include "Taxation.h"

Taxation::Taxation(double value) {
    this->rate = value;
}

std::ostream &Taxation::output(std::ostream &os) const {
    os << "Taxation is Theft!";
    return os;
}

