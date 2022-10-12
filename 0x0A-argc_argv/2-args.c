#include <stdio.h>

/**
 * main - this programs prints all command line arguments
 *        passed to this script
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: integer always
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	int i = 0;

	while (argv[i])
		puts(argv[i++]);
	return (0);
}
