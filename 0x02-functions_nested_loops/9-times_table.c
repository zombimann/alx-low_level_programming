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
					_putchar ('0' + (r * c) / 10);
					_putchar ('0' + (r * c) % 10);
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
                                        _putchar ('0' + (r * c) / 10);
                                        _putchar ('0' + (r * c) % 10);
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
