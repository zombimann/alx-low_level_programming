#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Draw a diagonal line on the screen
 * @n: number of times the character \ should be printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('j');
				/*if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
					}*/
			}
		}
	}
}
