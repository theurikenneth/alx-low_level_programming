#include "3-calc.h"
#include <string.h>

/**
 * get_op_func- selects the operation function
 * @s: the operation to perform
 *
 * Return: NULL or pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

while (s && ops[i].op != NULL)
{
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);
++i;
}
return (NULL);
}
