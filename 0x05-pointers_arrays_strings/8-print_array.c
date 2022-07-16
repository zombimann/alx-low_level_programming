#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers the \n
 * @a: The array of integers
 * @n: Number of elements to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	/*arr_size = (sizeof(a) / (8*sizeof(*a))) - 1;*/
	/*while (n <= arr_size && i++ < n)*/
	i = 0;
	while (i++ < n)
		printf("%d, ", *a++);
	putchar('\n');
}
