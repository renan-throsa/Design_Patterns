//
// Created by renan on 20/08/18.
//

#ifndef DESIGN_PATTERNS_CONSTRUCTOR_H
#define DESIGN_PATTERNS_CONSTRUCTOR_H


#include <string>
#include <vector>
#include "../base/Item.h"
#include "../base/Invoice.h"

class Constructor {
public:
    Constructor();

    Invoice *buildInvoice(void);

    Constructor *withName(std::string);

    Constructor *withCnpj(std::string);

    Constructor *withItems(std::vector<Item *> &);

    Constructor *withDate(time_t);

    Constructor *withDeatail(std::string);

private:
    void setSocial_name(const std::string &social_name);

    void setCnpj(const std::string &cnpj);

    void setDetails(const std::string &details);

    void setDate(time_t date);

    void setItems(std::vector<Item *> &items);


    std::string social_name;
    std::string cnpj;
    std::string details;
    time_t date;
    std::vector<Item *> items;


};


#endif //DESIGN_PATTERNS_CONSTRUCTOR_H
