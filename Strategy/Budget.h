//
// Created by renan on 10/08/18.
//

#ifndef DESIGN_PATTERNS_BUDGET_H
#define DESIGN_PATTERNS_BUDGET_H


class Budget {
public:
    Budget(int value);

    int getValue() const;

    void setValue(int value);


private:
    int value;
};


#endif //DESIGN_PATTERNS_BUDGET_H
