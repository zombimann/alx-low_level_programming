#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: the input string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++ != '\0')
		i++;
	return (i);
}
