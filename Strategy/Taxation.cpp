//
// Created by renan on 10/08/18.
//

#include "Taxation.h"

Taxation::Taxation(double value) {
    this->rate = value;
}

std::ostream &operator<<(std::ostream & ostream, const Taxation &taxation) {
    std::cout << "Taxation is Theft!" << std::endl;
    return ostream;
}


