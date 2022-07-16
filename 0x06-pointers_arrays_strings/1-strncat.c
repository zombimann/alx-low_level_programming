#include <stdio.h>
/**
 * _strncat - appends src string to the dest string
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

	while (*dest != '\0')
        {
                dest++;
                i++;
        }
        while (*src != '\0' && j++ < n )
        {
                i++;
                *dest++ = *src++;
        }

        while (i-- > 0)
                dest--;

	return (dest);
}
