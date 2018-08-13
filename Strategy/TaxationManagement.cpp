//
// Created by renan on 11/08/18.
//

#include "TaxationManagement.h"
#include "Taxation.h"

TaxationManagement::TaxationManagement() {

}

double TaxationManagement::performeTaxation(Budget *budget, Taxation *taxation) {
    return taxation->calculate(budget);
}


