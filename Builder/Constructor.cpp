//
// Created by renan on 20/08/18.
//

#include "Constructor.h"

Constructor::Constructor() {
}


Invoice *Constructor::buildInvoice(void) {
    return new Invoice(social_name, cnpj, items, details, date);
};

Constructor *Constructor::withName(std::string name) {
    setSocial_name(name);
    return this;
}

Constructor *Constructor::withCnpj(std::string cnpj) {
    setCnpj(cnpj);
    return this;
}

Constructor *Constructor::withItems(std::vector<Item *> &items) {
    setItems(items);
    return this;
}

Constructor *Constructor::withDate(time_t date) {
    setDate(date);
    return this;
}

Constructor *Constructor::withDeatail(std::string details) {
    setDetails(details);
    return this;
}

void Constructor::setSocial_name(const std::string &social_name) {
    Constructor::social_name = social_name;
}

void Constructor::setCnpj(const std::string &cnpj) {
    if (cnpj.size() > 14 or cnpj.size() < 14) { throw std::runtime_error("A invalid CNPJ has been iserted"); }
    Constructor::cnpj = cnpj;
}

void Constructor::setDetails(const std::string &details) {
    if (details.size() > 30) { throw std::runtime_error("Details cannot have more than 30 characters"); }
    Constructor::details = details;
}

void Constructor::setDate(time_t date) {
    Constructor::date = date;
}

void Constructor::setItems(std::vector<Item *> &items) {
    /* T *ptr=nullptr;
        T &ref=*ptr;
     This is a bad programming practice, I am doing this only by learning purposes.*/
    if (&items != nullptr) {
        throw std::runtime_error("List of items cannot be null or empty.");
    }
    Constructor::items = items;
}




