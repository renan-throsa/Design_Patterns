//
// Created by renan on 10/08/18.
//

#include "ICMS.h"

ICMS::ICMS(double value) : Taxation(value) {
    this->name = "ICMS";
}

double ICMS::calculate(double value) {
    return value * this->rate;
}

const std::string &ICMS::getName() const {
    return name;
}

