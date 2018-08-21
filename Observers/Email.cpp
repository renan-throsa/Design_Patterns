//
// Created by renan on 20/08/18.
//

#include <iostream>
#include "Email.h"

Email::Email() : Observer() {
    std::cout << "Class email created";
}

void Email::send(Invoice *) {
    std::cout << "Invoice has been sent by email";
}

std::ostream &Email::output(std::ostream &os) const {
    os << "Sending by email.";
    return os;
}


