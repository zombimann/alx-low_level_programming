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
	_putchar ('0' + (abs(n) % 10));
	return (abs(n) % 10);
}
