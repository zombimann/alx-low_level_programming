#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name followed by a newline
 * @argc: the number of arguments
 * @argv: the character array of pointers to the arguments
 *
 * Return: 0 for successful execution
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		puts("Error");
		return (1);
	}
	argc = argc;
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

