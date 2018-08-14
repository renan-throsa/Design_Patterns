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

    virtual void pass(Budget *) = 0;

    virtual void reject(Budget *) = 0;

    virtual void conclude(Budget *) = 0;

    virtual void apply(Budget *) = 0;

protected:


    virtual std::ostream &output(std::ostream &os) const = 0;


};


#endif //DESIGN_PATTERNS_STATUS_H
