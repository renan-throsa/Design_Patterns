//
// Created by renan on 10/08/18.
//

#ifndef DESIGN_PATTERNS_TAXATION_H
#define DESIGN_PATTERNS_TAXATION_H

#include <iostream>
#include <sstream>


class Taxation {
    friend std::ostream &operator<<(std::ostream &os, const Taxation &taxation) {
        return taxation.output(os);
    }

public:

    Taxation(double rate);

    virtual double calculate(double budget) = 0;

    //That function will be overwrite.
    virtual std::ostream &output(std::ostream &os) const = 0;

protected:
    double rate;
};


#endif //DESIGN_PATTERNS_TAXATION_H
