//
// Created by renan on 14/08/18.
//

#ifndef DESIGN_PATTERNS_WAITING_H
#define DESIGN_PATTERNS_WAITING_H


#include "Status.h"

class Waiting : public Status {
public:

    std::ostream &output(std::ostream &os) const override;
    void analyze(Budget *) override;

};


#endif //DESIGN_PATTERNS_WAITING_H
