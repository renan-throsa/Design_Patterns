cmake_minimum_required(VERSION 3.12)
project(Design_Patterns)

set(CMAKE_CXX_STANDARD 14)

add_executable(Design_Patterns main.cpp base/Budget.h base/Budget.cpp base/Budget.h Strategy/Taxation.cpp Strategy/Taxation.h Strategy/IOF.cpp Strategy/IOF.h Strategy/ICMS.cpp Strategy/ICMS.h base/Item.cpp base/Item.h "Chain of Responsibility/QuantityDiscount.cpp" "Chain of Responsibility/QuantityDiscount.h" "Chain of Responsibility/AmountDiscount.cpp" "Chain of Responsibility/AmountDiscount.h" "Chain of Responsibility/SpecialDiscount.cpp" "Chain of Responsibility/SpecialDiscount.h" "Chain of Responsibility/Discount.cpp" "Chain of Responsibility/Discount.h" "Chain of Responsibility/DiscountManagement.cpp" "Chain of Responsibility/DiscountManagement.h" Strategy/TaxationManagement.cpp Strategy/TaxationManagement.h base/Client.cpp base/Client.h Decorator/Tribute.cpp Decorator/Tribute.h)