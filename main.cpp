#include <iostream>
#include "base/Budget.h"
#include "Strategy/Taxation.h"
#include "Strategy/PIS.h"
#include "Strategy/ICMS.h"


int main() {
    std::cout << "Hello, World! Testing the Strategy Patterns" << std::endl;


    Budget budget;
    budget.setItem(new Item("Geladeira", 1200.00));
    budget.setItem(new Item("Microondas", 400.00));
    budget.setItem(new Item("Liquidifcador", 200.00));
    budget.setItem(new Item("Sofá", 900.00));

    for (Item *item : budget.getItems()) {
        std::cout << *item << std::endl;
    }

    budget.setTaxation(new ICMS(0.25));
    std::cout << *budget.getTaxation();
    std::cout <<"Total: " <<budget.getValue()<<" Tributes: " <<budget.operation() << std::endl;

    return 0;
}
