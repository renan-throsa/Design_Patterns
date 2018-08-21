//
// Created by renan on 20/08/18.
//

#ifndef DESIGN_PATTERNS_EMAIL_H
#define DESIGN_PATTERNS_EMAIL_H


#include "Observer.h"

class Email : public Observer {

public:
    Email();
    void send(Invoice *) override;

    std::ostream &output(std::ostream &os) const override;
};


#endif //DESIGN_PATTERNS_EMAIL_H
