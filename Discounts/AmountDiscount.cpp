//
// Created by renan on 11/08/18.
//

#include "AmountDiscount.h"


AmountDiscount::AmountDiscount(Discount *next) : Discount(next) {}

double AmountDiscount::CalculateDiscount(Budget *budget) {
    if (budget->getTotal() > 2000.00 and budget->getPayment_method() == Payment::DEFERRED_PAYMENT) {
        double discount = budget->getTotal() * 0.20;
        budget->setValue(budget->getTotal() - discount);
        std::cout << *this << discount;
        return discount;
    } else {
        if (next) {
            return next->CalculateDiscount(budget);
        } else {
            return 0;
        }
    }

}

std::ostream &AmountDiscount::output(std::ostream &os) const {
    os << "Applying a discount based over the total amount of: R$ ";
    return os;
}