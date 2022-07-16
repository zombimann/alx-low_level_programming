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

	len = 0;
	while (*(str++) != '\0')
		len++;
	i = 0;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = len - (len - 1) / 2;
	i = len;
	while (i-- >= n)
		str--;
	while (i++ <= len)
		printf("%c", *str++);
	putchar('\n');
}
