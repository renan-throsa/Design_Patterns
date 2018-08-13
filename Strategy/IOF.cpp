//
// Created by renan on 10/08/18.
//

#include "IOF.h"

IOF::IOF(double value, Taxation *taxation) : Taxation(value, taxation) {
    this->name = "IOF";
}

double IOF::calculate(Budget *budget) {
    if (budget->getClient()->getKind() == Identification::INSTITUTIONAL) {
        double tax = budget->getValue() * this->rate;
        double newValue = budget->getValue() - tax;
        budget->setValue(newValue);
        return tax + this->additionalTribute(budget);
    } else {
        double tax = budget->getValue() * this->rate - budget->getValue() * 0.02;
        double newValue = budget->getValue() - tax;
        budget->setValue(newValue);
        return tax;
    }
}

std::ostream &IOF::output(std::ostream &os) const {
    os << "IOF rate has been applied \n";
    return os;
}


