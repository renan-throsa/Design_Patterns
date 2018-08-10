//
// Created by renan on 10/08/18.
//

#include "Taxation.h"

template<class Tax>
double Taxation<Tax>::calculate(Budget *budget, Tax *tax) {
    return budget->getValue() * 0.1;
}

template<class Tax>
std::ostream &operator<<(std::ostream &output, const Taxation<Tax> &taxation) {
    std::cout << "Taxation is Theft!" << std::endl;
    return output;
}

template<class Tax>
Taxation<Tax>::~Taxation() {
    std::cout << "Destroying Taxation\n" << std::endl;
}

