#include <stdlib.h>
#include <string.h>

/**
 * array_range - fun to creates an array of integers.
 *
 * @min: minimum int.
 * @max: maximum int.
 *
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int total;
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	total = max - min + 1;
	arr = (int *)malloc(total * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total; i++)
		arr[i] = min + i;

	return (arr);
}
