/*
*Write a function that prints all natural numbers from n to 98, followed by a new line.
*Prototype: void print_to_98(int n);
*Numbers must be separated by a comma, followed by a space
*Numbers should be printed in order
*The first printed number should be the number passed to your function
*The last printed number should be 98
*You are allowed to use the standard library
*/

#include "stdio.h"

void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
}
else if (n > 98)
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
printf("98 \n");
}

int main(void)
{
print_to_98(0);
print_to_98(98);
print_to_98(111);
print_to_98(81);
print_to_98(-10);
return (0);
}
