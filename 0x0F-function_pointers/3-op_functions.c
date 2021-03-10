#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds integers a and b
 * @a: the first integer
 * @b: the second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtraction of a and b
 * @a: the first integer
 * @b: the second integer
 *
 * Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul - multiplication a & b.
 *@a: integer value.
 *@b: integer value.
 *
 *Return: multiplication result of a & b.
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 *op_div - division a & b.
 *@a: integer value.
 *@b: integer value.
 *
 *Return: divided result of a & b.
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - find the remainder of the division of a by b
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
