#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program add all numbers passed to it via command line
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: the result of the addition, else 1
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	int sum, x = 0;
	int i = 1;

	while (argv[i])
	{
		for (x = 0; argv[i][x]; x++)
		{
			if (argv[i][x] < '0' || argv[i][x] > '9')
			{
				puts("Error");
				return (1);
			}
		}

		sum += atoi(argv[i++]);
	}

	printf("%d\n", sum);
	return (0);
}
