#include "../include/equation.h"

SquareEquation::SquareEquation() : a(0), b(0), c(0) {};

SquareEquation::SquareEquation(const double a, const double b, const double c) : a(a), b(b), c(c) {}

double SquareEquation::discriminant() const
{
    return b * b - 4 * a * c;
}

void SquareEquation::calculate() const
{    
    const double D = discriminant();
    
    if (a == 0 && b == 0) {
        if (c == 0) {
            cout << "Infinite number of solutions (any x is a solution)" << endl;
        } else {
            cout << "There are no solutions" << endl;
        }
        return;
    }
    
    if (a == 0) {
        double x = -c / b;
        cout << "There is one solution: " << x << endl;
        return;
    }
    
    if (D < 0) {
        double re = -b / (2 * a);
        double im = sqrt(-D) / (2 * a);
        cout << "There are complex solutions:" << endl;
        cout << "x1 = " << re << " + " << im << "i" <<endl;
        cout << "x2 = " << re << " - " << im << "i" <<endl;
    } else if (D == 0) {
        double x = -b / (2 * a);
        cout << "There is one solution: " << x << endl;
    } else {
        double x1 = (-b - sqrt(D)) / (2 * a);
        double x2 = (-b + sqrt(D)) / (2 * a);
        cout << "There are 2 solutions: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
}