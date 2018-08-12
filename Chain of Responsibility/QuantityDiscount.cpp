//
// Created by renan on 11/08/18.
//

#include "QuantityDiscount.h"


QuantityDiscount::QuantityDiscount(Discount *next) : Discount(next) {}


double QuantityDiscount::CalculateDiscount(Budget *budget) {
    if (budget->getItems().size() > 5 and budget->getPayment_method() == Payment::DEFERRED_PAYMENT) {
        return budget->getValue() * 0.1;
    } else {
        if (next) {
            return next->CalculateDiscount(budget);
        } else {
            return 0;
        }
    }
}

std::ostream &QuantityDiscount::output(std::ostream &os) const {
    os << "Applying discount based on the quantity of items";
    return os;
}

