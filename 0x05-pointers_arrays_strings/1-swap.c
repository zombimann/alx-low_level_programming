#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: The first integer
 * @b: the second integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

