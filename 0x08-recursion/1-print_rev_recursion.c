#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function that prints reverse string.
 *
 * @s: pointer for array of string.
 *
 * Return: string inside s.
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(s[i]);
	}
	else
		putchar('\n');
}
