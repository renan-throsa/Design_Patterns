//
// Created by renan on 10/08/18.
//

#ifndef DESIGN_PATTERNS_TAXATION_H
#define DESIGN_PATTERNS_TAXATION_H

#include <iostream>
#include "Budget.h"
template< class Tax >
class Taxation {
public:

    double calculate(Budget*, Tax*);

    ~Taxation();

    friend std::ostream &operator<<(std::ostream &, const Taxation &);


};


#endif //DESIGN_PATTERNS_TAXATION_H
