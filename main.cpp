#include <iostream>
#include "base/Budget.h"
#include "Strategy/Taxation.h"
#include "Strategy/IOF.h"
#include "Strategy/ICMS.h"
#include "Chain of Responsibility/Discount.h"
#include "Chain of Responsibility/QuantityDiscount.h"
#include "Chain of Responsibility/SpecialDiscount.h"
#include "Chain of Responsibility/AmountDiscount.h"
#include "Chain of Responsibility/DiscountManagement.h"
#include "Strategy/TaxationManagement.h"

int main() {
    std::cout << "Hello, World! Testing the Strategy Patterns" << std::endl;


    Budget budget(new Client("Torvald Linus", INDUVIDUAL));
    budget.setItem(new Item("Geladeira", 1200.00));
    budget.setItem(new Item("Microondas", 400.00));
    budget.setItem(new Item("Liquidifcador", 200.00));
    budget.setItem(new Item("Sofá", 900.00));

    std::cout << budget << std::endl;

    for (Item *item : budget.getItems()) {
        std::cout << *item << std::endl;
    }

    budget.setPayment_method(Payment::DEFERRED_PAYMENT);

    DiscountManagement dtmanagement(new QuantityDiscount(new AmountDiscount(new SpecialDiscount(nullptr))));

    std::cout << dtmanagement.performeDiscount(&budget) << std::endl;

    TaxationManagement txmanagement;

    std::cout << "Total: " << budget.getTotal() << " Tributes: "
              << txmanagement.performeTaxation(&budget, new ICMS(0.25)) << std::endl;
    std::cout << "After tributes: " << budget.getValue() << std::endl;

    return 0;
}
