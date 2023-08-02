#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a strin.
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
		putchar(s[i]);
	_print_rev_recursion(s - 1);
	}
	else
		putchar('\n');
}
