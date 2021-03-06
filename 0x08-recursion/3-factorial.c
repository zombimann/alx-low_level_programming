#include <stdio.h>

/**
 * factorial - returns the factorila of a given number
 * @n: The input integer whose factorila is to be found
 *
 * Return: -1, if n < 0. 1 if n = 0, and factorial if else
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
