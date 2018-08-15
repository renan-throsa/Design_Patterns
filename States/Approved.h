//
// Created by renan on 14/08/18.
//

#ifndef DESIGN_PATTERNS_APPROVED_H
#define DESIGN_PATTERNS_APPROVED_H

#include "Status.h"
#include "../base/Budget.h"

class Approved : public Status {
public:
    std::ostream &output(std::ostream &os) const override;
    void apply(Budget *) override;

    void approve(Budget *) override;

    void reject(Budget *) override;

    void conclude(Budget *) override;


};


#endif //DESIGN_PATTERNS_APPROVED_H
