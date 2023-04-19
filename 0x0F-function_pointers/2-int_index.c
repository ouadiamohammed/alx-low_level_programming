#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: pointer to a giving array.
 * @size: the size of the array.
 * @cmp: function pointer.
 *
 * Return: -1 if no element matches or if size <= 0.
 *         the integer indes.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array && cmp)
		{
			while (i < size)
			{
				if (cmp(*(array + i)))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
