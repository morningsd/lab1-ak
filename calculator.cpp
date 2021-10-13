#include "calculator.h"
/*
 * Some sort of changes
 * Think of it like an useless javadoc-like comments
 */

// Function that adds two numbers 
int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

// Function that subtracts two numbers
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

// Function that multiply two numbers
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
