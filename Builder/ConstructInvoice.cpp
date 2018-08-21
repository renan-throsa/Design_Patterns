#include <utility>
#include <iostream>

//
// Created by renan on 20/08/18.
//

#include "ConstructInvoice.h"

ConstructInvoice::ConstructInvoice() = default;


Invoice *ConstructInvoice::buildInvoice() {
    Invoice *invoice = new Invoice(social_name, cnpj, items, details, date);
    for (Observer *observer: observers) {
        observer->send(invoice);
    }
    return invoice;
};

ConstructInvoice *ConstructInvoice::withName(std::string name) {

    setSocial_name(name);
    return this;
}

ConstructInvoice *ConstructInvoice::withCnpj(std::string cnpj) {
    setCnpj(cnpj);
    return this;
}

ConstructInvoice *ConstructInvoice::withItems(std::vector<Item *> &items) {
    setItems(items);
    return this;
}

ConstructInvoice *ConstructInvoice::withDate(time_t date) {
    setDate(date);
    return this;
}

ConstructInvoice *ConstructInvoice::withDetail(std::string details) {
    setDetails(std::move(details));
    return this;
}

void ConstructInvoice::setSocial_name(const std::string &social_name) {
    ConstructInvoice::social_name = social_name;
}

void ConstructInvoice::setCnpj(const std::string &cnpj) {
    if (cnpj.size() > 14 or cnpj.size() < 14) { throw std::runtime_error("A invalid CNPJ has been iserted"); }
    ConstructInvoice::cnpj = cnpj;
}

void ConstructInvoice::setDetails(const std::string details) {
    if (details.size() > 30) { throw std::runtime_error("Details cannot have more than 30 characters"); }
    ConstructInvoice::details = details;

}

void ConstructInvoice::setDate(time_t date) {
    ConstructInvoice::date = date;
}

void ConstructInvoice::setItems(std::vector<Item *> &items) {
    /* T *ptr=nullptr;
        T &ref=*ptr;
     This is a bad programming practice, I am doing this only by learning purposes.*/
    if (&items == nullptr) {
        throw std::runtime_error("List of items cannot be null or empty.");
    }
    ConstructInvoice::items = items;
}

const std::vector<Observer *> &ConstructInvoice::getObservers() const {
    return observers;
}

ConstructInvoice *ConstructInvoice::withObserver(Observer *observer) {

    ConstructInvoice::observers.push_back(observer);
}




