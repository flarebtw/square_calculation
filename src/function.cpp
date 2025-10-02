#include "../include/function.h"

double input(const string message)
{
    cout << message <<endl;
    double in;
    if (!(cin >> in))
    {
        throw runtime_error("Entered value must be a number!");
    }
    return in;
}
