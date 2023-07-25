#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 *
 * @n: integer variable
 * @a: string pointer for ineger
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (i < n; i++)
	{
        printf("%d ", a[i]);
    }
	printf("\n");
}
