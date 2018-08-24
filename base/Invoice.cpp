#include <utility>

//
// Created by renan on 20/08/18.
//

#include "Invoice.h"


Invoice::Invoice(std::string &name, std::string &cnpj, std::vector<Item *> &items, std::string details, time_t date) {
    social_name = name;
    this->cnpj = cnpj;
    this->items = items;
    this->details = std::move(details);
    this->date  = date;
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


std::vector<Item *> &Invoice::getItems() {
    return items;
}

std::ostream &operator<<(std::ostream &os, const Invoice &invoice) {
    char *dt = ctime(&invoice.date);
    os << "social_name: " << invoice.social_name << " cnpj: " << invoice.cnpj << " details: " << invoice.details
       << " date: " << dt << " items: ";


    for (Item *item : invoice.items) {
        os << *item;
    }
/*
    for (int i = 0; i <= invoice.items.size(); i++) {
        os << *(invoice.items[i]);
    }


    for (std::vector<Item *>::const_iterator i = invoice.items.begin(); i != invoice.items.end(); i++) {
        os << **i;
    }
*/
    return os;
}

