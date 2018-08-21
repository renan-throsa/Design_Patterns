//
// Created by renan on 20/08/18.
//

#ifndef DESIGN_PATTERNS_OBSERVER_H
#define DESIGN_PATTERNS_OBSERVER_H

#include <iostream>
#include "../base/Invoice.h"

class Observer {
    friend std::ostream &operator<<(std::ostream &, Observer &);

public:
    Observer();
    virtual void send(Invoice *) = 0;

protected:
    virtual std::ostream &output(std::ostream &os) const = 0;


};


#endif //DESIGN_PATTERNS_OBSERVER_H
