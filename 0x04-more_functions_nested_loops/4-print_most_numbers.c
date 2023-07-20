#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers exept 2&4
 *
 * Description: This function generates numbers
 *
 * Return: void
 */
void print_most_numbers(void)
        /* Function implementation */
{
        char ch;

        for (ch = '0'; ch <= '9'; ch++)
        {
		if (ch != "2" && ch != "4")
		{
                	putchar(ch);
        	}
	}

        putchar('\n');

}
