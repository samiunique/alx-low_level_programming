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
    int count = 0;

    for (i = 0; i <= 7; i++)
    {
        for (j = i + 1; j <= 8; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                printf("%d%d%d", i, j, k);

                if (count < 598)
                {
                    printf(", ");
                    count += 4;
                }
                else
                {
                    count += 3;
                }
            }
        }
    }

    return 0;
}
