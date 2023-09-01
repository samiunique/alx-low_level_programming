#include "main.h"

/**
 * clear_bit - clear
 *
 * @n: pointer to 
 * @index: starting
 *
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
 {
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
