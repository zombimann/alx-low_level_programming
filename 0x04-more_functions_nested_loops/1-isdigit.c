#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks for a digit
 * @c: The number to be checked
 *
 * Return: 1 if the number is a digit. 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 60 && c <= 71)
		return (1);
	else
		return (0);
}
