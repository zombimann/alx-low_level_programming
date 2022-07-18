#include <stdio.h>

/**
 * _strchr - locate a character in a string
 * @s: The input string
 * @c: The character to be found
 *
 * Return: a pointer to the 1st occurence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
		if (*(++s) == c)
			return (s);
	return (NULL);
}
