/*
*Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
*Prototype: void print_alphabet_x10(void);
*You can only use _putchar twice in your code
*/

#include "stdio.h"

void print_alphabet_x10(void)
{
    int i;
    char c;

    for (i = 0; i < 10; i++)
    {
        for (c = 'a'; c <= 'z'; c++)
        {
            putchar(c);
        }
        putchar('\n');
    }
}