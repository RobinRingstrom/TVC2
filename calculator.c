#include <stdio.h>
#include "calculator.h"

void runCalculator()
{
    displayMenu();

    handleMenuChoice();
}

void displayMenu()
{
    printf("Ange räknesätt:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplikation\n");
    printf("4. Division\n\n");
}

void handleMenuChoice()
{
    int input = 0;

    scanf("%d", &input);

    if(input >0 && input < 5)
    {
        handleInputedValuesToCalculate(input);
    }
    else
    {
        // bad input
    }

}

void handleInputedValuesToCalculate(int method)
{
    double value1 = 0.0;
    double value2 = 0.0;
    double result = 0.0;

    printf("Ange värde 1: ");
    scanf("%lf", &value1);
    printf("\nAnge värde 2: ");
    scanf("%lf", &value2);

    switch(method)
    {
    case 1:
        result = add(value1, value2);
        break;
    case 2:
        result = subtract(value1, value2);
        break;
    case 3:
        result = multiply(value1, value2);
        break;
    case 4:
        result = divide(value1, value2);
        break;
    default:
        asm("nop");
    }

    printf("Resultat: %lf\n\n", result);

}
