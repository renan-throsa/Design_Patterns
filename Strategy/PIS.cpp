//
// Created by renan on 10/08/18.
//

#include "PIS.h"

PIS::PIS(double value) : Taxation(value) {
    this->name = "PIS";
}

double PIS::calculate(double value) {
    return value * this->rate;
}

std::ostream& PIS::output(std::ostream &os) const {
    os << "PIS rate has been applied \n";
    return os;
}


