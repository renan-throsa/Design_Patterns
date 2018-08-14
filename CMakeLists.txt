cmake_minimum_required(VERSION 3.12)
project(Design_Patterns)

set(CMAKE_CXX_STANDARD 14)

add_executable(Design_Patterns main.cpp base/Budget.h base/Budget.cpp base/Budget.h Tributes/Taxation.cpp Tributes/Taxation.h Tributes/IOF.cpp Tributes/IOF.h Tributes/ICMS.cpp Tributes/ICMS.h base/Item.cpp base/Item.h "Discounts/QuantityDiscount.cpp" "Discounts/QuantityDiscount.h" "Discounts/AmountDiscount.cpp" "Discounts/AmountDiscount.h" "Discounts/SpecialDiscount.cpp" "Discounts/SpecialDiscount.h" "Discounts/Discount.cpp" "Discounts/Discount.h" base/Client.cpp base/Client.h Tributes/IPI.cpp Tributes/IPI.h States/Status.cpp States/Status.h States/Waiting.cpp States/Waiting.h States/Approved.cpp States/Approved.h States/Denied.cpp States/Denied.h States/Finished.cpp States/Finished.h)