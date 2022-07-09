#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print the numbers 0 to 14 ten times
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 9 + 1; i++)
	{
		for (j = 0; j < 14 + 1; j++)
		{
			if (j > 9)
				_putchar((i/10) + '1');
			_putchar((j%10) + '0');
		}
		_putchar('\n');
	}
}
