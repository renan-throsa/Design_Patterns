//
// Created by renan on 14/08/18.
//

#include "IPI.h"


IPI::IPI(double value, Taxation *taxation) : Taxation(value, taxation) {
    this->name = "IPI";
}

double IPI::calculate(Budget *budget) {
    double tax = budget->getValue() * this->rate;
    double newValue = budget->getValue() + tax;
    budget->setValue(newValue);
    return tax + this->additionalTribute(budget);
}

std::ostream &IPI::output(std::ostream &os) const {
    os << "IPI rate has been applied \n";
    return os;
}
