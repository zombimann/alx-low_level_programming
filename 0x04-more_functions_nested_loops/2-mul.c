#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * mul - Multiplies two integers
 * @a: First operand
 * @b: Second operand
 *
 * Return: The result of the operation
 */

int mul(int a, int b)
{
	int i, prod;

	prod = 0;
	for (i = 0; i < abs(b); i++)
		prod += a;
	return (prod);
}
