#include <string.h>
#include "main.h"


/**
 * _strlen_recursion - gives length of string.
 *
 * @s: string parameter
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
