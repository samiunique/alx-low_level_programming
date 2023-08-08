#include <string.h>
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a newly allocated space in memory.
 *
 * @str: character pointer
 *
 * Return: returns a pointer to a new string 
 */

char *_strdup(char *str)
{
	char *x;

	if (str == NULL)
	{
		return (NULL);
	}
	size_t len = strlen(str);
	x = (char *)malloc(len + 1);
	if (x == NULL)
	{
		return (NULL);
	}
}


