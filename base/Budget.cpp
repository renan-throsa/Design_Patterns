//
// Created by renan on 10/08/18.
//

#include "Budget.h"

Budget::Budget() {

}

int Budget::getValue() {
    double total = 0.0;
    for (Item *item : this->items) {
        total += item->getPrice();
    }

    return total;
}

double Budget::operationTaxation() {
    return taxation->calculate(this->getValue());
}


Taxation *Budget::getTaxation() {
    return taxation;
}


void Budget::setItem(Item *item) {
    items.push_back(item);
}


std::vector<Item *> Budget::getItems() {
    return items;
}


void Budget::setTaxation(Taxation *taxation) {
    Budget::taxation = taxation;
}

Payment Budget::getPayment_method() const {
    return payment_method;
}

void Budget::setPayment_method(Payment payment_method) {
    Budget::payment_method = payment_method;
}


double Budget::operationDiscount(Discount *discount) {
    double value_of_discount = discount->CalculateDiscount(this);
    return value_of_discount;
}
