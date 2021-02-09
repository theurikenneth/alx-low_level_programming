#include "holberton.h"

/**
 * _islower - check if "c" is lowercase
 * @c - it will be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
