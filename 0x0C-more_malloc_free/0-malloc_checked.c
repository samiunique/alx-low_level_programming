#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory.
 *
 * @b: intiger input string.
 *
 * Return: Returns a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	else
		return (m);
}
