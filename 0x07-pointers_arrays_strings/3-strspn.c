#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the input string
 * @accept: Reference string
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, n;

	i = 0;
	while (*s != '\0')
	{
		if (in_s(accept, *s))
		{
			s++;
			i++;
		}
		else
			break;
	}

	n = i;
	while (i-- > 0)
		s--;

	return (n);
}

/**
 * in_s - locate a character in a string
 * @s: The input string
 * @c: The character to be found
 *
 * Return: 1 if c is found in s, or 0 if not found
 */

int in_s(char *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			return (1);
		i++;
		s++;
	}

	while (i-- > 0)
		s--;
	return (0);
}
