//
// Created by renan on 10/08/18.
//

#include "Budget.h"

Budget::Budget(int value) {
    this->value = value;
}

int Budget::getValue() const {
    return value;
}

void Budget::setValue(int value) {
    Budget::value = value;
}
