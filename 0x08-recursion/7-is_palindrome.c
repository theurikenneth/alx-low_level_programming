#include "holberton.h"

int check_palindrome(char *s);

/**
 * is_palindrome - Returns whether a string is palindrome
 * @s: the string value to undergo check
 *
 * Return: integer value
 */
int is_palindrome(char *s)
{
if (*s == '0')
return (1);

return (check_palindrome(s));
}
/**
 * check_palindrome - check if the string is palindrome
 * @s: the string value to undergo check
 *
 *Return: interger value
 */
int check_palindrome(char *s)
{
int i, c = 0, n;
n = _strlen_recursion(s) + 1;

for (i = 0; i < n / 2; i++)
{
if (s[i] == s[n - i - 1])
c++;
}
if (c == i)
return (1);
else
return (0);
}

/**
 * _strlen_recursion - finds the string length
 * @s: the string to get the length
 *
 * Return: the string lenth
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}

