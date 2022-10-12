#include <stdio.h>

/**
 * main - this programs prints the number of command line arguments
 *        passed to this script
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: integer always
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
