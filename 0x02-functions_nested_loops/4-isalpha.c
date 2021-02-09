#include "holberton.h"

/**
 * _isalpha - tests whether c is a letter, lowercase or uppercase
 * @c: the character to be tested
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
