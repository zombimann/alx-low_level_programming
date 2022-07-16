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
	int i;

	i = 0;
	while (*dest != '\0')
	{
		/*putchar(*dest++);*/
		dest++;
		i++;
	}
	while (*src != '\0')
	{
		i++;
		/*putchar(*dest);*/
		*dest++ = *src++;
	}

	while (i-- > 0)
		dest--;

	return (dest);
}
