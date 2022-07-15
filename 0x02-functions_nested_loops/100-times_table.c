#include "main.h"

/**
 * times_table - prints the 9 times table starting from 9
 *
 * Return: nothing
 */

void print_times_table(int n)
{
	if (n > 15)
		print_it (15);
	else
		print_it (n);
}


/**
 * print_it - does the actual printing
 *
 * Return: Nothing
 */

void print_it(int n)
{
	int r, c;

	for (r = 0; r < n; r++)
	{
		for (c = 0; c < n; c++)
		{
			if (c == 0)
			{
				_putchar ('0');
				comma_and_space();
			}
			else
			{
				if ((r * c) > 9 && c < n)
				{
					multi_digit(r, c);
					comma_and_space();
				}
				if ((r * c) <= 9 && c < n)
				{
					_putchar (' ');
					_putchar ('0' + (r * c));
					comma_and_space();
				}
				if ((r * c) > 9 && c == n)
				{
					multi_digit(r, c);
				}
				if ((r * c) <= 9 && c == n)
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
	if ((r * c) > 99)
		_putchar ('0' + (r * c) / 100);
	_putchar ('0' + ((r * c) / 10) % 10);
	_putchar ('0' + (r * c) % 10);
}

/**
 * comma_and_space - Prints a comma and space
 *
 * Return: Nothing
 */

void comma_and_space(void)
{
	_putchar (',');
	_putchar (' ');
	_putchar (' ');
}
