#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Zero for successful operation
 */

int main(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
		putchar(a++);
	putchar('\n');
	return (0);
}
