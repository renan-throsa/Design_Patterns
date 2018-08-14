//
// Created by renan on 14/08/18.
//

#ifndef DESIGN_PATTERNS_FINISHEE_H
#define DESIGN_PATTERNS_FINISHEE_H

#include "Status.h"
#include "Denied.h"
#include "Approved.h"


class Finished : public Status {


    void apply(Budget *) override;

    void pass(Budget *) override;

    void reject(Budget *) override;

    void conclude(Budget *) override;

protected:
    std::ostream &output(std::ostream &os) const override;
};


#endif //DESIGN_PATTERNS_FINISHEE_H
