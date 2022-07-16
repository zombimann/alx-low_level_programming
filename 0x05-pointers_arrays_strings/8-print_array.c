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
	int arr_size, i;

	arr_size = (sizeof(a) / sizeof(*a));
	while (n <= arr_size && i++ < n)
		printf("%d", *a++);
	putchar('\n');
}
