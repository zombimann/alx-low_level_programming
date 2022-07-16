#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the input string
 *
 * Return: the resulting character pointer
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;
		s++;
		i++;
	}

	while (i-- > 0)
		s--;

	return (s);
}
