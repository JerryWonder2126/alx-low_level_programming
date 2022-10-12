#include <stdio.h>
#include <stdlib.h>

/**
 * main - this programs multiplies two numbers passed to it via command line
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: the result of multiplication if no error, else 1
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
