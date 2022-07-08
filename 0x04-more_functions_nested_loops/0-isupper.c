#include <stdio.h>

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

/**
 * main - Entry point
 *
 * Return: zero for successful operation
 */

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

