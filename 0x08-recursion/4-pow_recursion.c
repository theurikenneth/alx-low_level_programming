#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - returns x raised to y
 * @x: value to be raised
 * @y: raises y
 *
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

else if (y < 1)
return (1);

return (x * _pow_recursion(x, y - 1));
}
