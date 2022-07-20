#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string followed by a newline
 * @s: the input string to be printed
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	print (s);
	putchar ('\n');
}

/**
 * print - does the actual printing and uses recursion
 * @s: The string to be printed
 *
 * Return: nothing
 */

void print(char *s)
{
	if (*s == '\0')
		return;
	putchar(*s++);
	print(s++);
}
