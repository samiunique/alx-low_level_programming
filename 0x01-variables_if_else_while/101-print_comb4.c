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
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			for (k = 2; k <= 4; k++)
			{
				printf("%d%d%d", i, j, k);

				if (!(i == 7 && j == 8 && k == 9))
				{
					printf(", ");
				}
			}
		}
	}

	printf("\n");

	return (0);
}
