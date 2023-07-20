#include <stdio.h>

/**
 * print_numbers - function to print alphabet
 *
 * Description: This function generates alpabets in lower case
 *
 * Return: void
 */
void print_numbers(void)
	/* Function implementation */
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

}
