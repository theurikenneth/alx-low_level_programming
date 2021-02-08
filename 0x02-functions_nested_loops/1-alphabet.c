#include "holberton.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: void
 */
void print_alphabet(void);
{
int a;

a = 'a';
while (a <= 'z')
{
_puchar(a++);
}
_putchar(10);
return;
}
