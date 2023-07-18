#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function generates alpabets in lower case
 *              last digit of the number.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
	/* Function implementation */
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

}
