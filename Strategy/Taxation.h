//
// Created by renan on 10/08/18.
//

#ifndef DESIGN_PATTERNS_TAXATION_H
#define DESIGN_PATTERNS_TAXATION_H

#include <iostream>


class Taxation {
public:

    Taxation(double rate);

    virtual double calculate(double budget)=0;

    friend std::ostream &operator<<(std::ostream &, const Taxation &);

protected:
    double rate;
};


#endif //DESIGN_PATTERNS_TAXATION_H
