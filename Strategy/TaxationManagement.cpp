//
// Created by renan on 11/08/18.
//

#include "TaxationManagement.h"
#include "Taxation.h"

TaxationManagement::TaxationManagement(Taxation *tax) {
    this->taxation = tax;
}

double TaxationManagement::performeDiscount(Budget *budget) {
    return this->taxation->calculate(budget->getTotal());
}

Taxation *TaxationManagement::getTaxation() {
    return this->taxation;
}

void TaxationManagement::setTaxation(Taxation *tax) {
    this->taxation = tax;
}
