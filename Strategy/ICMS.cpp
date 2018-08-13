//
// Created by renan on 10/08/18.
//

#include "ICMS.h"

ICMS::ICMS(double value, Taxation *taxation) : Taxation(value, taxation) {
    this->name = "ICMS";
}

double ICMS::calculate(Budget *budget) {
    if (budget->getClient()->getKind() == Identification::INDUVIDUAL) {
        double tax = budget->getValue() * this->rate;
        double newValue = budget->getValue() - tax;
        budget->setValue(newValue);
        return tax + this->taxation->additionalTribute(budget);
    } else {
        double tax = budget->getValue() * this->rate + budget->getValue() * 0.01;
        double newValue = budget->getValue() - tax;
        budget->setValue(newValue);
        return tax + this->taxation->additionalTribute(budget);
    }
}

const std::string ICMS::getName() const {
    return name;
}

std::ostream &ICMS::output(std::ostream &os) const {
    os << this->name << " rate has been applied \n";
    return os;
}