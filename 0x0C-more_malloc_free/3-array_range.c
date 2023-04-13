#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: min value.
 * @max: max value.
 *
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;
	int range = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * range);
	if (ptr == NULL)
		return (NULL);

	for (; i < range; i++)
		ptr[i] = min++;

	return (ptr);
}
