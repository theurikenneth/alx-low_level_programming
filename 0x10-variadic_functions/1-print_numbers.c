#include "variadic_functions.h"

/**
 * print_numbers - entry point
 * @separator: the output separator
 * @n: number of args
 * @...: the integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int remaining = n;

va_start(args, n);
if (!separator)
separator = "";

while (remaining--)
{
printf("%d", va_arg(args, int));

if (remaining)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
