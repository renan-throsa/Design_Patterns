//
// Created by renan on 14/08/18.
//

#ifndef DESIGN_PATTERNS_IPI_H
#define DESIGN_PATTERNS_IPI_H


#include "Taxation.h"

class IPI : public Taxation {
public:
    IPI(double, Taxation *taxation = nullptr);

    double calculate(Budget *) override;

    std::ostream &output(std::ostream &os) const override;

private:
    std::string name;
};


#endif //DESIGN_PATTERNS_IPI_H
