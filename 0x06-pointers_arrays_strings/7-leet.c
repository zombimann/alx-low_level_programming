#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @s: input string
 *
 * Return: charater pointer to new string
 */

char *leet(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == 'a' || *s == 'A')
			*s = '4';
		else if (*s == 'e' || *s == 'E')
			*s = '3';
		else if (*s == 'o' || *s == 'O')
			*s = '0';
		else if (*s == 't' || *s == 'T')
			*s = '7';
		else if (*s == 'l' || *s == 'L')
			*s = '1';
		s++;
		i++;
	}

	while (i-- > 0)
		s--;
	return (s);
}
