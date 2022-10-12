#include "3-calc.h"

/**
 * main - program entry point
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: integer always
 */

int main(int argc, char **argv)
{
	char *op;
	int num1, num2;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		puts("Error");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (EXIT_SUCCESS);
}
