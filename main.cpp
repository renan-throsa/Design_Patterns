#include <iostream>
#include "base/Budget.h"
#include "Tributes/Taxation.h"
#include "Tributes/IOF.h"
#include "Tributes/ICMS.h"
#include "Discounts/Discount.h"
#include "Discounts/QuantityDiscount.h"
#include "Discounts/SpecialDiscount.h"
#include "Discounts/AmountDiscount.h"
#include "Tributes/IPI.h"

int main() {
    std::cout << "Hello, World! Testing the Tributes Patterns" << std::endl;


    Budget budget(new Client("Torvald Linus", INDUVIDUAL));
    budget.setItem(new Item("Geladeira", 1200.00));
    budget.setItem(new Item("Microondas", 400.00));
    budget.setItem(new Item("Liquidifcador", 200.00));
    budget.setItem(new Item("Sofá", 900.00));

    std::cout << budget << std::endl;

    for (Item *item : budget.getItems()) {
        std::cout << *item << std::endl;
    }
    std::cout << "Before the discount: " << budget.getValue() << std::endl;

    budget.setPayment_method(Payment::DEFERRED_PAYMENT);

    Discount *dtmanagement = new QuantityDiscount(new AmountDiscount(new SpecialDiscount(nullptr)));

    dtmanagement->CalculateDiscount(&budget);


    Taxation *tax = new ICMS(0.2, new IOF(0.11, new IPI(0.1)));

    std::cout << "\nTotal: " << budget.getValue() << " Tributes: "
              << tax->calculate(&budget) << std::endl;
    std::cout << "After tributes: " << budget.getValue() << std::endl;

    return 0;
}
