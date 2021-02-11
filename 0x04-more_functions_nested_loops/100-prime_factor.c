#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i;
long int n;
long int j;

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
j = n / i;
n = j;
i = 1;
}
}
return (0);
}
