#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function generates a random number and determines the
 *              last digit of the number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 6; j++)
		{
			if (!(i == 9 && j == 6))
				{
					printf(", ");
			}
		}
	}

	printf("\n");

	return (0);
}
