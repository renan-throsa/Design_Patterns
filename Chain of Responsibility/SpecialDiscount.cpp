//
// Created by renan on 11/08/18.
//

#include "SpecialDiscount.h"


SpecialDiscount::SpecialDiscount(Discount *next) : Discount(next) {}


double SpecialDiscount::CalculateDiscount(Budget *budget) {
    if (budget->getValue() > 3000.00 and budget->getPayment_method() == Payment::CASH_PAYMENT) {
        return budget->getValue() * 0.3;
    } else {
        if (next) {
            return next->CalculateDiscount(budget);
        } else {
            return 0;
        }
    }

}

std::ostream &SpecialDiscount::output(std::ostream &os) const {
    os << "Applying a simple discount";
    return os;
}
