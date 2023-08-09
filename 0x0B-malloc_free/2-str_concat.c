#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: string 1 to concatenates
 * @s2: string 2 to concatenates
 *
 * Return: return NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	size_t len_s1;
	size_t len_s2;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	concatenated = (char *)malloc(len_s1 + len_s2 + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}
	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
