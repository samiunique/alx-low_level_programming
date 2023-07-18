#include <stdio.h>

/**
 * print_alphabet - function to print alphabet 10x
 *
 * Description: This function generates alpabets in lower case
 *
 * Return: void
 */
void print_alphabet_x10(void)
        /* Function implementation */
{
        char ch, i;
	for (i = 0; i <= 9; i++)
	{

        	for (ch = 'a'; ch <= 'z'; ch++)
        	{	
                	_putchar(ch);
        	}

        	_putchar('\n');
	}
}
