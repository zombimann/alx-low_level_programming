#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n:  The integer whose absolute value is to bve computed
 *
 * Return: The absolute value
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
