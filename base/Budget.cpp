//
// Created by renan on 10/08/18.
//



#include "Budget.h"
#include "../States/Waiting.h"


Budget::Budget(Client *client) {
    this->client = client;
    this->value = 0;
    this->payment_status = new Waiting();
}

double Budget::getTotal() {
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


std::vector<Item *> &Budget::getItems() {
    return Budget::items;
}

Payment Budget::getPayment_method() const {
    return Budget::payment_method;
}

void Budget::setPayment_method(Payment payment_method) {
    Budget::payment_method = payment_method;
}

double Budget::getValue() const {
    return Budget::value;
}

void Budget::setValue(double value) {
    Budget::value = value;
}

Client *Budget::getClient() const {
    return Budget::client;
}

std::ostream &operator<<(std::ostream &os, const Budget &budget) {
    os << "items: " << " payment_method: " << budget.payment_method << " value: " << budget.value
       << " client: " << *budget.client;
    return os;
}

Status *Budget::getPayment_status() const {
    return payment_status;
}

void Budget::setPayment_status(Status *payment_status) {
    Budget::payment_status = payment_status;
}

void Budget::apply(void) {
    Budget::payment_status->apply(this);
}

void Budget::approve() {
    Budget::payment_status->approve(this);
}

void Budget::reject() {
    Budget::payment_status->reject(this);
}

void Budget::conclude() {
    Budget::payment_status->conclude(this);
}




