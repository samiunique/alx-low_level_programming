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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
