//
// Created by renan on 10/08/18.
//

#ifndef DESIGN_PATTERNS_BUDGET_H
#define DESIGN_PATTERNS_BUDGET_H


#include "../Strategy/Taxation.h"
#include <vector>
#include "Item.h"

enum Payment {
    CASH_PAYMENT, DEFERRED_PAYMENT
};

class Budget {
public:
    Budget();

    int getValue();

    std::vector<Item *> getItems();

    void setItem(Item *);

    Payment getPayment_method() const;

    void setPayment_method(Payment payment_method);

    double operation();

    void setTaxation(Taxation *taxation);

    Taxation *getTaxation();

private:
    std::vector<Item *> items;
    Taxation *taxation;
    enum Payment payment_method;
};


#endif //DESIGN_PATTERNS_BUDGET_H
