#include <string.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	size_t len_s1;
	size_t len_s2;

	/* if NULL is passed, treat it as an empty string */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	/* If n is greater or equal to the length of s2 then use the entire string s2*/
	if (n >= len_s2)
	{
		n = len_s2;
	}
	concatenated = (char *)malloc(len_s1 + n + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}
	strcpy(concatenated, s1);
	strcat(concatenated, s2);
	concatenated[len_s1 + n] = '\0';

	return (concatenated);
}
