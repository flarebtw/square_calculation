#include "../include/equation.h"
#include "../include/function.h"

int main(void)
{
    double a = input("Enter coefficient a:");
    double b = input("Enter coefficient b:");
    double c = input("Enter coefficient c:");
    SquareEquation equation(a, b, c);
    equation.calculate();
    return 0;
}