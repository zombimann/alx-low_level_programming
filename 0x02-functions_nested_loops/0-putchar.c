#include "main.h"

/**
 * main - prints _putchar followed by a newline
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char mystr[9] = "_putchar";
	i = 0;

	while (mystr[i] != '\0')
		_putchar(mystr[i++]);
	_putchar('\n');
	return (0);
}
