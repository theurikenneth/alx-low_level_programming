#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the output separator
 * @n: number of args
 * @...: the string to print
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int count = n;
const char *str = NULL;

va_start(args, n);
if (!separator)
separator = "";
while (count--)
{
str = va_arg(args, const char *);
printf("%s", str ? str : "(nil)");

if (count)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
