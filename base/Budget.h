//
// Created by renan on 10/08/18.
//

#ifndef DESIGN_PATTERNS_BUDGET_H
#define DESIGN_PATTERNS_BUDGET_H

#include <vector>
#include <ostream>
#include "Item.h"
#include "Client.h"

//#include "../States/Status.h"
class Status;

enum Payment {
    CASH_PAYMENT, DEFERRED_PAYMENT
};

class Budget {

    friend std::ostream &operator<<(std::ostream &os, const Budget &budget);

public:

    Budget(Client *);

    double getTotal();

    std::vector<Item *> getItems();

    void setItem(Item *);

    Payment getPayment_method() const;

    void setPayment_method(Payment payment_method);

    Client *getClient() const;

    Status *getPayment_status() const;

    void setPayment_status(Status *payment_status);

    double getValue() const;

    void setValue(double value);

    void  apply(void);

    void approve(void);

    void reject(void);

    void conclude(void);

private:
    std::vector<Item *> items;
    Payment payment_method;
    Status *payment_status;
    double value;
    Client *client;

};

#endif //DESIGN_PATTERNS_BUDGET_H
