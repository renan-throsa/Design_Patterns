//
// Created by renan on 10/08/18.
//

#ifndef DESIGN_PATTERNS_PIS_H
#define DESIGN_PATTERNS_PIS_H

#include <string>
#include "Taxation.h"


class IOF : public Taxation {
public:
    IOF(double);

    double calculate(Budget *);

    virtual std::ostream &output(std::ostream &os) const;

private:
    std::string name;


};


#endif //DESIGN_PATTERNS_PIS_H
