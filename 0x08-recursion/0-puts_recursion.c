#include <stdio.h>
#include "main.h"

/**
 * void_puts_recursion - puts a astring followed by a new line
 *
 * @s: input string
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
		_putchar(*s++);
	_putchar('\n');
}
