//
// Created by renan on 10/08/18.
//

#ifndef DESIGN_PATTERNS_TAXATION_H
#define DESIGN_PATTERNS_TAXATION_H

#include <iostream>
#include "../base/Budget.h"

class Taxation {

    friend std::ostream &operator<<(std::ostream &os, const Taxation &tribute) {
        return tribute.output(os);
    }

public:

    Taxation(double rate, Taxation *taxation = nullptr);

    virtual double calculate(Budget *) = 0;

    virtual double additionalTribute(Budget *) = 0;

    //That function will be overwrite.
    virtual std::ostream &output(std::ostream &os) const = 0;

protected:
    Taxation *taxation;
    double rate;
};


#endif //DESIGN_PATTERNS_TAXATION_H
