//
// Created by renan on 20/08/18.
//

#include "Bank.h"

Bank::Bank():Observer(){
    std::cout << "Class bank created";
}

void Bank::send(Invoice *) {
    std::cout << "Invoice has been sent to the Bank";
}

std::ostream &Bank::output(std::ostream &os) const {
    os << "Sending for the Bank.";
    return os;
}


