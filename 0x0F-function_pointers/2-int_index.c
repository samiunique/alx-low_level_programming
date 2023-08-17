#include <stdio.h>

/**
 * int_index - index of int
 *
 * @array: array
 * @size: size of
 * @cmp: pointer
 *
 * Return: index unles not int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
				return (i);
		}
	}
	return (-1);
}
