#include "hplberton.h"

/**
 * print_sign - checks whether a number is +, 0 or -.
 *
 * Return: 1 if +, 0 if 0 and -1 if -
 */
int print_sign(int n)
}
if (n > 0)
{
_putchar("+");
return (1);
}
else if (n < 0)
{
_putchar("-");
return (-1);
}
else
{
_putchar("0");
return (0);
}
}
