#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be tested
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar ('0' + (n % 10));
		return (abs(n) % 10);
	}
	else
	{
		_putchar ('0' + (-1*(n) % 10));
		return (abs(n) % 10);
	}
}
