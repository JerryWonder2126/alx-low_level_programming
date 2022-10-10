#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **mem, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mem = malloc(sizeof(int) * height);

	if (mem == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		mem[y] = malloc(sizeof(int) * width);

		if (mem[y] == NULL)
		{
			for (; y >= 0; y--)
				free(mem[y]);
			free(mem);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
			mem[y][x] = 0;
	}

	return (mem);
}
