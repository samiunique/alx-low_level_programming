#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/* add random no to variable n */
/* betty style doc for function main goes there */
/* main -read random no from variable n ade identify if is */
/**
 * main - Entry point of the program
 *
 * Description: This function prints the string
 * "Programming is like building a multilingual puzzle"
 * enclosed in double quotation marks.
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
        /* your code goes there */
        if (num > 5)
        {
                printf("the last digit of %d is %d and is grater than 5\n", n, num);
        }
        else if (num == 0)
        {
                printf("the last digit of %d is %d and 0\n", n, num);
        }
        else
        {
                printf("the last digit of %d is %d and less than 6\n", n, num);
        }
        return (0);
                                                                                                                                                                                             
}                          
