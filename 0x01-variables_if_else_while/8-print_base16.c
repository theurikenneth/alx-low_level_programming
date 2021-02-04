#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
 char letter;

for (num = 0; num < 16; num++)
putchar(num);
for (letter = 'a'; letter < 'g'; letter++)
putchar(letter);

putchar('\n');

return (0);

}
