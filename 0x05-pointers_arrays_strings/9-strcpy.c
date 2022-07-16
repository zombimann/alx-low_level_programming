#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src including '\0' to a buffer
 * @dest: the buffer
 * @src: the string pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	do {
		*dest++ = *src;
		i++;
	} while (*src++ != '\0');

	while (i-- > 0)
	{
		dest--;
		src--;
	}
	return (dest);
}
