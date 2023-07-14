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
    int n;
    int num;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    num = n % 10;

    /* your code goes here */
    if (num > 5)
    {
        printf("The last digit of %d is %d and is greater than 5\n", n, num);
    }
    else if (num == 0)
    {
        printf("The last digit of %d is %d and is 0\n", n, num);
    }
    else
    {
        printf("The last digit of %d is %d and is less than 6\n", n, num);
    }

    return (0);
}
