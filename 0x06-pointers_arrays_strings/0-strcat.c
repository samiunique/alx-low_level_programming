#include <stdio.h>
#include <string.h>

/**
 * _strcat - function to concatenate 2 strings.
 *
 * @dest: pointer to file destination.
 * @src: pointer to file source.
 *
 * Return: pointer to resulting string @dest.
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
