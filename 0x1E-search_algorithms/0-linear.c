#include "search_algos.h"

/**
 * linear_search - function
 * @array: array
 * @size: size of the array
 * @value: the value
 *
 * Return: Return
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
