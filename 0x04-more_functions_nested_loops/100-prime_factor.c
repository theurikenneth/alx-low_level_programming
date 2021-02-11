#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, n;

n = 612852475143;
for (i = 1; i <= n; i++)
{
if (n % i == 0)
{
if (n == i)
{
printf("%d\n", i);
break;
}
}
}
return (0);
}
