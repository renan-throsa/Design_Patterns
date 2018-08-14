//
// Created by renan on 11/08/18.
//

#ifndef DESIGN_PATTERNS_ITEM_H
#define DESIGN_PATTERNS_ITEM_H


#include <ostream>

enum Fabricated {
    NATIONAL_PRODUCT, INTERNATIONAL_PRODUCT
};

class Item {

    friend std::ostream &operator<<(std::ostream &, const Item &);

public:
    Item(const std::string &description, double price);

    void setPrice(double);

    double getPrice() const;

private:
    std::string description;
    double price;
};


#endif //DESIGN_PATTERNS_ITEM_H
