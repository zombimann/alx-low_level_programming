#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s of any
 * bytes in the string s
 * @s: the input string
 * @accept: Reference string
 *
 * Return: A pointer to thre byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (in_s(accept, *s))
			return (s);
		s++;
	}

	return (NULL);
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
