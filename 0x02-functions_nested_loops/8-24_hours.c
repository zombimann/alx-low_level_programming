#include "main.h"

/**
 * jack_bauer - prints out every minute of the day of Jack Bauer
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	int m, h;

	for (h = 0; h < 24; h++)
		for (m = 0; m < 60; m++)
		{
			_putchar ('0' + (h / 10));
			_putchar ('0' + (h % 10));
			_putchar (':');
			_putchar ('0' + (m / 10));
			_putchar ('0' + (m % 10));
			_putchar ('\n');
		}
}
