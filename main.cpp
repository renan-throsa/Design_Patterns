#include <iostream>
#include "Strategy/Budget.h"
#include "Strategy/Taxation.h"
#include "Strategy/PIS.h"
#include "Strategy/ICMS.h"


int main() {
    std::cout << "Hello, World! Testing the Strategy Patterns" << std::endl;


    Budget budget(500, new PIS(0.19));

    std::cout << *(budget.getTaxation());
    std::cout << budget.operation() << std::endl;

    budget.setTaxation(new ICMS(0.25));
    std::cout << budget.operation() << std::endl;

    return 0;
}
