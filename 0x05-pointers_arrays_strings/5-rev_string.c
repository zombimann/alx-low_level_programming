#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: the input string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int n, i;
	char *temp;

	n = 0;
	while (*s != '\0')
	{
		s++;
		n++;
	}

	i = 0;
	while (i++ < n)
		*temp++ = *(--s);
	i = 0;
	while (i++ < n)
		--temp;
	i = 0;
	while (i++ < n)
		*(s++) = *(temp++);

	i = 0;
	while (i++ < n)
	{
		s--;
		temp--;
	}
}
