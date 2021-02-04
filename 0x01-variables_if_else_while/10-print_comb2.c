#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int m, n;

for (m = 0; m < 10; m++)
{
for (n = 0; n < 10; n++)
{
putchar((m % 10) + '0');
putchar((n % 10) + '0');

if (m == 9 && n == 9)
continue;
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);

}
