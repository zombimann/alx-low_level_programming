#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory area pointer
 * @b: constant byte
 * @n: number of memory places to be filled
 *
 * Return: s, a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*printf("0x%02x\n", b);*/
	i = 0;
	while (i++ < n)
		*s++ = b;
	while (i-- > 0)
		s--;
	return (s);
}
