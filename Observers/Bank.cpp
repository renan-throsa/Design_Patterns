//
// Created by renan on 20/08/18.
//

#include "Bank.h"

Bank::Bank() : Observer() {
    std::cout << "Class bank created" << std::endl;
}

void Bank::send(Invoice *) {
    std::cout << "Invoice has been sent to the Bank" << std::endl;
}

std::ostream &Bank::output(std::ostream &os) const {
    os << "This class send invoice for the Bank." << std::endl;
    return os;
}


