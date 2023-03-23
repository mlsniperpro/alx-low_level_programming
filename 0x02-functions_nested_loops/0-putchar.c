#include <stdio.h>

int print_putchar(void)
{
    char *str = "_putchar";
    int i;

    for (i = 0; i < 8; i++)
        putchar(str[i]);
    putchar('\n');
    return (0);
}

