#include "main.h"

/**
 * print_binary - function to print binary repre of numbers
 *
 * @n: int type number to be  represented.
 *
 * Return: binary.
 */

void print_binary(unsigned long int n)
{
	int mask;
	unsigned long int i;

	if (n == 0)
	{
		printf("0");
		return;
	}
		if (n == 1)
		{
			printf("1");
			return;
		}
		mask = 1 << (sizeof(n) - 1);
		for (i = 0; i < sizeof(n); i++)
		{
			putchar((n & mask) ? '1' : '0');
			n <<= 1;
		}
}
