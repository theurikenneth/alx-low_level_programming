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
int n = _strlen_recursion(s);

if (*s == s[n - 1])
{
s++;
n--;
}
else
{
return (0);
}
return (1);
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

