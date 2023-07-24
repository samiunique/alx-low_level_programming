#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: variable poited for character
 *sami
 * Return: Nothing
*/

void print_rev(char *s)
{
	int x;
	
	for (x = 0; s[x] != '\0'; ++x)
	;
	for (--x; x >= 0; --x)
		_putchar(s[x]);
	_putchar('\n');
}
