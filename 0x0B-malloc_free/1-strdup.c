#include <string.h>
#include <stdlib.h>

/**
 * _strdup -  function to returns pointer to a newly allocated space in memory.
 *
 * @str: character pointer
 *
 * Return: returns a pointer to a new string
 */

char *_strdup(char *str)
{
	char *x;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	x = (char *)malloc(len + 1);
	if (x == NULL)
	{
		return (NULL);
	}
	strcpy(x, str);

	return (x);
}
