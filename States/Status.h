//
// Created by renan on 14/08/18.
//

#ifndef DESIGN_PATTERNS_STATUS_H
#define DESIGN_PATTERNS_STATUS_H


#include "../base/Budget.h"

class Status {
    friend std::ostream &operator<<(std::ostream &os, Status &status) {
        return status.output(os);
    }

protected:
    virtual std::ostream &output(std::ostream &os) const = 0;

    virtual void analyze(Budget *) = 0;
};


#endif //DESIGN_PATTERNS_STATUS_H
