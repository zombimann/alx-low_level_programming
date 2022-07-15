#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: negative, zero or postive if s1 is less than s2, equal to s2 or greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[2]; i++)
		if (s1[i] != '\0')
			return (0);
	return (s1[i] - s2[i]);
}
