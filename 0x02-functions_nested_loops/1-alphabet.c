#include <stdio.h>

/**
 * prit alphabet 
 *
 * Description: This function generates alpabets in lower case
 * sequencialy.
 *
 * Return: void
 */
/* Function implementation */
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
