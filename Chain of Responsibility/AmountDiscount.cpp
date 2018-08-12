//
// Created by renan on 11/08/18.
//

#include <ostream>
#include "AmountDiscount.h"


AmountDiscount::AmountDiscount(Discount *next) : Discount(next) {}

double AmountDiscount::CalculateDiscount(Budget *budget) {
    if (budget->getTotal() > 2000.00 and budget->getPayment_method() == Payment::DEFERRED_PAYMENT) {
        std::cout << *this;
        return budget->getTotal() * 0.20;
    } else {
        if (next) {
            return next->CalculateDiscount(budget);
        } else {
            return 0;
        }
    }

}

std::ostream &AmountDiscount::output(std::ostream &os) const {
    os << "Applying a discount based on the total amount." << std::endl;;
    return os;
}