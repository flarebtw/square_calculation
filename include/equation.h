#pragma once

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

class SquareEquation
{
    private:
        double a, b, c;
    public:
        SquareEquation();
        SquareEquation(const double a, const double b, const double c);
        double discriminant() const;
        void calculate() const;
};