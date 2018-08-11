//
// Created by renan on 11/08/18.
//

#include <ostream>
#include "AmountDiscount.h"

template<class Discount>
AmountDiscount<Discount>::AmountDiscount(Discount *next) {
    this->next = next;
}

template<class Discount>
double AmountDiscount<Discount>::CalculateDiscount(Discount *discount) {
    if (discount->getValue() > 2000.00) {
        return discount->getValue * 0.25;
    }
    return 0;
}

template<class Discount>
std::ostream &operator<<(std::ostream &os, const AmountDiscount<Discount> &discount) {
    os << "Applying discount according to the value";
    return os;
}