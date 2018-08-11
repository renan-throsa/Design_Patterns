//
// Created by renan on 11/08/18.
//

#include "Item.h"

Item::Item(const std::string &description, double price) {
    this->description = description;
    this->price = price;
}

void Item::setPrice(double value) {
    price = value;
}

double Item::getPrice() const {
    return price;
}

std::ostream &operator<<(std::ostream &os, const Item &item) {
    os << "{product: " << item.description << ", " << "price: " << item.price << " }" << std::endl;
    return os;
}



