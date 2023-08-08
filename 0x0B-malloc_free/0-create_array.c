#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars.
 *
 *
 * @size: size of the array.
 * @c: character variabile for the array
 *
 * Return: NULL or array pointer.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	x = malloc(size * sizeof(char));
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}

	return (x);
}
