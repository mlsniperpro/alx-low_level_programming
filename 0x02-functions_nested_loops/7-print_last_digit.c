/*
*Write a function that prints the last digit of a number.
*Prototype: int print_last_digit(int);
*Returns the value of the last digit
*/
#include "stdio.h"
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
{
last_digit = last_digit * -1;
}
putchar(last_digit + '0');
return (last_digit);
}

