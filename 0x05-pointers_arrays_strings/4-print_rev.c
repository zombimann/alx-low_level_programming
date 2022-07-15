#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a newline
 * @s: the input string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int n;

	n = 0;
	while (*s != '\0')
	{
		s++;
		n++;
	}
	while (n >= 0)
	{
		putchar (*s);
		n--;
		s--;
	}
	putchar ('\n');
}
