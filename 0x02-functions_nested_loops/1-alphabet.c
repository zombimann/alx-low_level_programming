#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a newline
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
		_putchar (i++);
	_putchar ('\n');
}
