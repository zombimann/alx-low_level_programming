#include <stdio.h>
#include "main.h"

/**
 * print_line - Draw a straight line through the terminal
 * @n: The number of time the underscore should appear
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
