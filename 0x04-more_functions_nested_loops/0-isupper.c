#include <stdio.h>
#include "main.h"

/**
 * _isupper - Determines whether a character is uppercase or not
 * @c: The number to be checked
 *
 * Return: 1 if the number is uppercase. 0 otherwise
 */

int _isupper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
