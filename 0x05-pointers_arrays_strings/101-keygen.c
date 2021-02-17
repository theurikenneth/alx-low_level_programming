#include "holberton.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
srand (time (0));
int num = rand();
printf("%i\n", num);

return (0);
}
