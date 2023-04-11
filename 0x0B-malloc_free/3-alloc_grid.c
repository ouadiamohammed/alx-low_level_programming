#include <stdlib.h>

/**
 * alloc_grid - 2D array of integers.
 *
 * @width: width of the grid.
 * @height: height of the grid.
 *
 * Return: pointer to 2d array of ints.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);

}
