#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check for alpbets in any case
 *
 * @c: int argument
 *
 * Return: 0
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
