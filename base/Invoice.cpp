//
// Created by renan on 20/08/18.
//

#include "Invoice.h"


Invoice::Invoice(std::string name, std::string cnpj, std::vector<Item *> &items, std::string details, time_t date) {
    social_name = name;
    this->cnpj = cnpj;
    this->items = &items;
}

const std::string &Invoice::getCnpj() const {
    return cnpj;
}

const std::string &Invoice::getDetails() const {
    return details;
}

time_t Invoice::getDate() const {
    return date;
}


const std::string &Invoice::getSocial_name() const {
    return social_name;
}


std::vector<Item *> *Invoice::getItems() const {
    return items;
}

std::ostream &operator<<(std::ostream &os, const Invoice &invoice) {
    os << "social_name: " << invoice.social_name << " cnpj: " << invoice.cnpj << " details: " << invoice.details
       << " date: " << invoice.date << " items: " << invoice.items;
    return os;
}

