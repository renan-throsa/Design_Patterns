//
// Created by renan on 10/08/18.
//

#ifndef DESIGN_PATTERNS_ICMS_H
#define DESIGN_PATTERNS_ICMS_H


#include "Taxation.h"

class ICMS : public Taxation {

public:
    const std::string getName() const;

    ICMS(double, Taxation *taxation = nullptr);

    double calculate(Budget *) override;

    std::ostream &output(std::ostream &) const override;

private:
    std::string name;
};




#endif //DESIGN_PATTERNS_ICMS_H
