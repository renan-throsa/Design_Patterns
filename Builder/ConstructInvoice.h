//
// Created by renan on 20/08/18.
//

#ifndef DESIGN_PATTERNS_CONSTRUCTOR_H
#define DESIGN_PATTERNS_CONSTRUCTOR_H


#include <string>
#include <vector>
#include "../base/Item.h"
#include "../base/Invoice.h"
#include "../Observers/Observer.h"

class ConstructInvoice {
public:
    ConstructInvoice();

    Invoice *buildInvoice();

    ConstructInvoice *withName(std::string);

    ConstructInvoice *withCnpj(std::string);

    ConstructInvoice *withItems(std::vector<Item *> &);

    ConstructInvoice *withDate(time_t);

    ConstructInvoice *withDetail(std::string);

    ConstructInvoice *withObserver(Observer *);

private:
    void setSocial_name(const std::string &social_name);

    void setCnpj(const std::string &cnpj);

    void setDetails(std::string);

    void setDate(time_t date);

    void setItems(std::vector<Item *> &items);

    const std::vector<Observer *> &getObservers() const;


    std::string social_name;
    std::string cnpj;
    std::string details;
    time_t date;
    std::vector<Item *> items;
    std::vector<Observer *> observers;


};


#endif //DESIGN_PATTERNS_CONSTRUCTOR_H
