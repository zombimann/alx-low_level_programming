#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - puts a astring followed by a new line
 * @s: input string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s++);
	_puts_recursion(s);
}
