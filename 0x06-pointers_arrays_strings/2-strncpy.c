#include <stdio.h>
/**
 * _strncpy - appends src string to the dest string, overwriting ther terminal null and adding a terminal null
 * @dest: The string whose elements are to be replaced
 * @src: The string to be copied
 * @n: Length of string to be copied
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
