//
// Created by renan on 14/08/18.
//

#ifndef DESIGN_PATTERNS_WAITING_H
#define DESIGN_PATTERNS_WAITING_H

#include "Status.h"
#include "Denied.h"
#include "Approved.h"

class Waiting : public Status {

public:

    std::ostream &output(std::ostream &os) const override;

    void apply(Budget *) override;

    void approve(Budget *) override;

    void reject(Budget *) override;

    void conclude(Budget *) override;


};


#endif //DESIGN_PATTERNS_WAITING_H
