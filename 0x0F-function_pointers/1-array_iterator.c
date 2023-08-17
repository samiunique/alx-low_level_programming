#include <stdlib.h>

/**
 * array_iterator - function to itrate array.
 *
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use.
 * @array: array containelements to titrate.
 *
 * Return: action unles null.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
