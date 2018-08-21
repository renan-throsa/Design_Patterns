//
// Created by renan on 20/08/18.
//

#include "Observer.h"

std::ostream &operator<<(std::ostream &os, Observer &observer) {
    return observer.output(os);
}

Observer::Observer() = default;
