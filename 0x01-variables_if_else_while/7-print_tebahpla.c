#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Zero for successful operation
 */

int main(void)
{
	int a;

	a = 'z';
	while (a >= 'a')
		putchar(a--);
	putchar('\n');
	return (0);
}
