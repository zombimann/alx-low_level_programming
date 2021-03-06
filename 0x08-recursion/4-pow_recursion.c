#include <stdio.h>

/**
 * _pow_recursion - a function to find the power of an integer
 * @x: The input integer to be raised
 * @y: The power
 *
 * Return: -1 if y < 0, else the calculated value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

