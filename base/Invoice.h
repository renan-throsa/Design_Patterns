//
// Created by renan on 20/08/18.
//

#ifndef DESIGN_PATTERNS_INVOICE_H
#define DESIGN_PATTERNS_INVOICE_H

#include <ctime>
#include <string>
#include <vector>
#include <ostream>
#include "Item.h"


class Invoice {
public:
    friend std::ostream &operator<<(std::ostream &os, const Invoice &invoice);

public:

    Invoice(std::string&, std::string&, std::vector<Item *>&, std::string details = "", time_t date = time(0));

    const std::string &getCnpj() const;


    const std::string &getDetails() const;


    time_t getDate() const;


    std::vector<Item *> &getItems();

    const std::string &getSocial_name() const;


private:
    std::string social_name;
    std::string cnpj;
    std::string details;
    time_t date;
    std::vector<Item *> items;

};


#endif //DESIGN_PATTERNS_INVOICE_H
