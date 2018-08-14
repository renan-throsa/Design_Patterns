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

    Taxation(double, Taxation *taxation = nullptr);

    virtual double calculate(Budget *) = 0;

protected:

    //That function will be overwrite.
    virtual std::ostream &output(std::ostream &os) const = 0;


    double additionalTribute(Budget *);

    double rate;
private:
    Taxation *taxation;
};


#endif //DESIGN_PATTERNS_TAXATION_H
