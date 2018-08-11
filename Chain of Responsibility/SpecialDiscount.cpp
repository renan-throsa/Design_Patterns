//
// Created by renan on 11/08/18.
//

#include "SpecialDiscount.h"
template<class Discount>
SpecialDiscount<Discount>::SpecialDiscount(Discount *next) {
    this->next = next;
}

template<class Discount>
double SpecialDiscount<Discount>::CalculateDiscount(Discount *discount) {
    if (discount->getItems().size() > 5) {
        return discount->getValue * 0.1;
    }
    return 0;
}

template<class Discount>
std::ostream &operator<<(std::ostream &os, const SpecialDiscount<Discount> &discount) {
    os << "Applying a simple discount";
    return os;
}