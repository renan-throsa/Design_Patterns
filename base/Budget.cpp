//
// Created by renan on 10/08/18.
//

#include "Budget.h"

Budget::Budget(Client *client) {
    this->client = client;
    this->value = 0;
}

int Budget::getTotal() {
    double total = 0.0;
    for (Item *item : this->items) {
        total += item->getPrice();
    }

    return total;
}

void Budget::setItem(Item *item) {
    items.push_back(item);
    value += item->getPrice();
}


std::vector<Item *> Budget::getItems() {
    return items;
}


Payment Budget::getPayment_method() const {
    return payment_method;
}

void Budget::setPayment_method(Payment payment_method) {
    Budget::payment_method = payment_method;
}

double Budget::getValue() const {
    return value;
}

void Budget::setValue(double value) {
    Budget::value = value;
}

Client *Budget::getClient() const {
    return client;
}

std::ostream &operator<<(std::ostream &os, const Budget &budget) {
    os << "items: " << " payment_method: " << budget.payment_method << " value: " << budget.value
       << " client: " << budget.client;
    return os;
}


