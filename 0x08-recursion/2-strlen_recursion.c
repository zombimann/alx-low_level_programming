#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string (using recursion)
 * @s: The input string
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s++ != '\0')
		return (1 + _strlen_recursion(s++));
	else
		return (0);
}
