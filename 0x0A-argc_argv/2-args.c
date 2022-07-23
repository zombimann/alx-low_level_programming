#include <stdio.h>

/**
 * main - prints all the argument it receives
 * @argc: the number of arguments
 * @argv: the character array of pointers to the arguments
 *
 * Return: 0 for successful execution
 */

int main(int argc, char *argv[])
{
	while (argc--)
		puts(*argv++);
	return (0);
}

