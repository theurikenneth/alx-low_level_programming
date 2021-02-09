#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *str = "Holberton\n";

while (*str != '\0')
_putchar(*str++);
return (0);
}
