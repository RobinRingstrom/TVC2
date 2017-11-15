#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED

#include "addition.h"
#include "subtraction.h"
#include "division.h"
#include "multiplication.h"

void runCalculator();

void displayMenu();

void handleMenuChoice();

void handleInputedValuesToCalculate(int method);


#endif // CALCULATOR_H_INCLUDED
