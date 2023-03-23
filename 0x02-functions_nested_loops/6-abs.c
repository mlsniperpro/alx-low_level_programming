/*
*Write a function that computes the absolute value of an integer.
*
rototype: int _abs(int);
FYI: The standard library provides a similar function: abs. Run man abs to learn more.
*/

#include "stdio.h"

int _abs(int n)
{
    if (n < 0)
    {
        n = n * -1;
    }
    return (n);
}

