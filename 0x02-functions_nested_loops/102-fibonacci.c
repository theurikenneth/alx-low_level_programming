#include <stdlib.h>
#include <stdio.h>

/**
 * main- entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long double fib1;
long double fib2;
long double fib3;
int n;

n = 1;
fib1 = 1;
fib2 = 1;
printf("%.Lf, ", fib2);
while (n <= 49)
{
fib3 = fib1 + fib2;
printf("%.Lf", fib3);
n++;
fib1 = fib2;
fib2 = fib3;
if (n != 50)
{
printf(", ");
}
}
putchar('\n');
return (0);
}
