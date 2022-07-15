#include "main.h"

/**
 * times_table - prints the 9 times table starting from 9
 *
 * Return: nothing
 */

void times_table(void)
{
	int r, c;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			if (c == 0)
			{
				_putchar ('0');
				_putchar (',');
				_putchar (' ');
			}
			else
			{
				if ((r * c) > 9 && c < 9)
				{
					multi_digit(r, c);
					_putchar (',');
					_putchar (' ');
				}
				if ((r * c) <= 9 && c < 9)
				{
					_putchar (' ');
					_putchar ('0' + (r * c));
					_putchar (',');
					_putchar (' ');
				}
				if ((r * c) > 9 && c == 9)
				{
					multi_digit(r, c);
				}
				if ((r * c) <= 9 && c == 9)
				{
					_putchar (' ');
					_putchar ('0' + (r * c));
				}
			}
		}
		_putchar ('\n');
	}
}

/**
 * multi_digit - prints out values for values with more than one digit
 * @r: the row number
 * @c: the column number
 *
 * Return: Nothing
 */

void multi_digit(int r, int c)
{
	_putchar ('0' + (r * c) / 10);
	_putchar ('0' + (r * c) % 10);
}
