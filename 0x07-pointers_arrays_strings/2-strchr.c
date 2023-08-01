/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: pointer to string
 * @c: character to locate fron input
 *
 * Return: first occurance or null
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ("\0");
}
