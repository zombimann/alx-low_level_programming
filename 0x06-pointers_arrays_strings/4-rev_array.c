#include <stdio.h>

/**
 * reverse_array - naive function reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp[100];

	i = 0;
	while (i++ < n)
		a++;

	i = 0;
	while (i < n)
		temp[i++] = *a--;

	i = 0;
	while (++i <= n)
		*a++ = temp[i];
}
