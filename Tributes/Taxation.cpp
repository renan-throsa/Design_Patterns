//
// Created by renan on 10/08/18.
//

#include "Taxation.h"

Taxation::Taxation(double value, Taxation *tribute) {
    this->rate = value;
    this->taxation = tribute;
}

double Taxation::additionalTribute(Budget *budget) {
    if (this->taxation) {
        this->taxation->calculate(budget);
    } else {
        return 0;
    }
}





