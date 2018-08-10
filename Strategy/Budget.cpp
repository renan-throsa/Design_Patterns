//
// Created by renan on 10/08/18.
//

#include "Budget.h"

Budget::Budget(int value,Taxation* taxation) {
    this->value = value;
    this->taxation = taxation;
}

int Budget::getValue() const {
    return value;
}

double Budget::operation() const {
    return taxation->calculate(this->value);
}

Taxation *Budget::getTaxation() const {
    return taxation;
}

void Budget::setTaxation(Taxation *taxation) {
    Budget::taxation = taxation;
}
