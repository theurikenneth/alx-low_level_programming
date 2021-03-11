#include "variadic_functions.h"

/**
 * print_numbers - entry point
 * @separator: the output separator
 * @n: number of args
 * @...: the integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args:
unsigned int i;

va_start(args, n);
if (separator == NULL)
separator = "";

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));

if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
