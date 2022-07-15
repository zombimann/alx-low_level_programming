#include <stdio.h>
/**
 * _strncat - appends src string to the dest string, overwriting ther terminal null and adding a terminal null
 * @dest: The string whose length is to be added
 * @src: The string to be appended to the dest string
 * @n: Length of tring to be appended
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while(*dest++ != '\0')
		i++;
	while(src[j] != '\0' && j < n)
		dest[i++] = src[j++];

	return (dest);
}
