#include "main.h"

/**
 * _print_rev_recursion - prints a string followed by a newline
 * @s: the input string to be printed
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int n;

	n = 1;
	while (*s++ != '\0')
		n++;
	print (s, n);
	_putchar ('\n');
}

/**
 * print - does the actual printing and uses recursion
 * @s: The string to be printed
 * @n: index
 *
 * Return: nothing
 */

void print(char *s, int n)
{
	/* go back to zero, printing every character*/
	if (n-- <= 0)
		return;
	_putchar(*s--);
	print(s--, n);
}
