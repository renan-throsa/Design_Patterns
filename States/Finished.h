//
// Created by renan on 14/08/18.
//

#ifndef DESIGN_PATTERNS_FINISHEE_H
#define DESIGN_PATTERNS_FINISHEE_H

#include "Status.h"


class Finished : public Status {
    std::ostream &output(std::ostream &os) const override;

    void analyze(Budget *) override;
};


#endif //DESIGN_PATTERNS_FINISHEE_H
