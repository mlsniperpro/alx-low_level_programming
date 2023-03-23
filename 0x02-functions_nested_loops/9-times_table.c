/*
*Write a function that prints the 9 times table, starting with 0.
*Prototype: void times_table(void);
*Format: see example
*/

#include "stdio.h"

void times_table(void)
{
int i;
int j;
int result;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
result = i * j;
if (j == 0)
{
putchar(result + '0');
}
else if (result < 10)
{
putchar(',');
putchar(' ');
putchar(' ');
putchar(result + '0');
}
else
{
putchar(',');
putchar(' ');
putchar(result / 10 + '0');
putchar(result % 10 + '0');
}
}
putchar(' ');
}
}



