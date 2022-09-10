#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function outputs the minimum possible combinations of number
 *
 * Return: Always 0
 */
int main(void)
{
	int i1, i2, i3;

	i1 = i2 = i3 = 0;

	while (i1 <= 9)
	{
		while (i2 <= 8)
		{
			i3 = ++i2;
			while (i3 <= 8)
			{
				i3++;
				putchar(i1 + '0');
				putchar(i2 + '0');
				putchar(i3 + '0');
				if (i1 != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

		i2 = ++i1;
	}

	putchar('\n');

	return (0);
}
