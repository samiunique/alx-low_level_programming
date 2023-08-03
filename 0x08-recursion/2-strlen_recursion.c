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
		_strlen_recursion(s + 1);
	return (strlen(s));
	else
		return (0);
}
