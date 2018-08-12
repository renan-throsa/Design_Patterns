//
// Created by renan on 11/08/18.
//

#include "DiscountManagement.h"

DiscountManagement::DiscountManagement(Discount *discount) {
    this->discount = discount;
}

double DiscountManagement::performeDiscount(Budget *budget) {
    return this->discount->CalculateDiscount(budget);
}


