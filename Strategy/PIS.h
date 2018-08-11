//
// Created by renan on 10/08/18.
//

#ifndef DESIGN_PATTERNS_PIS_H
#define DESIGN_PATTERNS_PIS_H

#include <string>
#include "Taxation.h"


class PIS : public Taxation {
public:
    PIS(double);

    double calculate(double);

    virtual std::ostream &output(std::ostream &os) const;

private:
    std::string name;


};


#endif //DESIGN_PATTERNS_PIS_H
