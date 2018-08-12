//
// Created by renan on 11/08/18.
//

#include <ostream>
#include "AmountDiscount.h"


AmountDiscount::AmountDiscount(Discount *next) : Discount(next) {}

double AmountDiscount::CalculateDiscount(Budget *budget) {
    if (budget->getValue() > 2000.00 and budget->getPayment_method() == Payment::DEFERRED_PAYMENT) {
        return budget->getValue() * 0.25;
    } else {
        if (next) {
            return next->CalculateDiscount(budget);
        } else {
            return 0;
        }
    }

}

std::ostream &AmountDiscount::output(std::ostream &os) const {
    os << "Applying a discount based on the total amount";
    return os;
}