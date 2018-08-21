//
// Created by renan on 20/08/18.
//

#ifndef DESIGN_PATTERNS_BANK_H
#define DESIGN_PATTERNS_BANK_H


#include "Observer.h"

class Bank : public Observer {

public:
    Bank();
    void send(Invoice *) override;

    std::ostream &output(std::ostream &os) const override;

};


#endif //DESIGN_PATTERNS_BANK_H
