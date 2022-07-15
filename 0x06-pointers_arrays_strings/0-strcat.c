#include <stdio.h>
/**
 * _strcat - appends src string to the dest string, overwriting ther terminal null and adding a terminal null
 * @dest: The string whose length is to be added
 * @src: the string to be appended to the dest string
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while(*dest++ != '\0')
		i++;
	while(src[j] != '\0')
		dest[i++] = src[j++];
	return (dest);
}
