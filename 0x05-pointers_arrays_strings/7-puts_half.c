#include <stdio.h>

/**
 * puts_half - prints the second half of a string followed by \n
 * @str: the input string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int len, n, i;

	len = i = 0;
	while (*(++str) != '\0')
		len++;
	n = len - (len - 1) / 2;
	while (i++ < n)
		str--;
	while (n++ <= len)
		printf("%c", *str++);
	putchar('\n');
}
