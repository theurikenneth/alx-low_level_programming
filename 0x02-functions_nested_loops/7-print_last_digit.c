#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the integer whose last digit to print
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int d = _abs(n % 10);
_putchar(d + '0');
return (d);
}

/**
 * _abs - returns the absolute value
 * @n: the integer to the absolute value
 *
 * Return: a positive integer or zero
 */
int _abs(int n)
{
return (n > 0 ? n : -n);
}
