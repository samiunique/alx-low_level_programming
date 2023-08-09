#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: argc
 * @av: argv
 *
 * Return: NULL if ac == 0 or av == NULL.
 */

char *argstostr(int ac, char **av)
{
	int i;
	size_t total_length = 0;
	size_t current_pos = 0;
	char *concatenated;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	concatenated = (char *)malloc(total_length + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(concatenated + current_pos, av[i]);
		current_pos += strlen(av[i]);
		concatenated[current_pos++] = '\n';
	}
	concatenated[current_pos] = '\0';

	return (concatenated);
}

