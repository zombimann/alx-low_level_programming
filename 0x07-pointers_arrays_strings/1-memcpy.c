#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: memory area to which data is copied
 * @src: memory area from which data is copied
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i++ < n)
		*dest++ = *src++;
	while (i-- > 0)
	{
		dest--;
		src--;
	}
	return (dest);
}
