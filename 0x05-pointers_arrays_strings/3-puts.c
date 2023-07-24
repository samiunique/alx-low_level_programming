#include <stdio.h>
#include "main.h"

/**
 * _puts - print string
 *
 * @str: a string array pointer
 *
 * Return: string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
