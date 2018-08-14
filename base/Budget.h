//
// Created by renan on 10/08/18.
//

#ifndef DESIGN_PATTERNS_BUDGET_H
#define DESIGN_PATTERNS_BUDGET_H

#include <vector>
#include <ostream>
#include "Item.h"
#include "Client.h"

enum Payment {
    CASH_PAYMENT, DEFERRED_PAYMENT
};

class Budget {

    friend std::ostream &operator<<(std::ostream &os, const Budget &budget);

public:

    Budget(Client *);

    int getTotal();

    std::vector<Item *> getItems();

    void setItem(Item *);

    Payment getPayment_method() const;

    void setPayment_method(Payment payment_method);

    Client *getClient() const;

    double getValue() const;

    void setValue(double value);

private:
    std::vector<Item *> items;
    enum Payment payment_method;
    double value;
    Client *client;
};


#endif //DESIGN_PATTERNS_BUDGET_H
