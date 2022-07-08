#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function to print out the numbers from 0 to 9, while skiupping 2 and 4
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i < '9' + 1; i++)
	{
		if ( i != ('2' || '4'))
			{
				_putchar(i);
			}
	}
}
	
