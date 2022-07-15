#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times then a \n
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int i, alph;

	i = 0;

	while (i++ < 10)
	{
		alph = 'a';
		while(alph <= 'z')
			_putchar (alph++);
		_putchar ('\n');
	}
}
