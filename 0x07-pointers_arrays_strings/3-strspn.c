/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: pointer to string
 * @accept: substring prefix
 *
 * Return: no of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int Look = 0;
	int Get;
	char *a;

	while(*s)
	{
		Get = 0;
		for (*a = accept; *a; a++)
		{
			if (*s == *a)
			{
				Get = 1;
				break;
			}
		}
		if (!Get)
			break;
		Look++;
		s++;
	}

	return (Look);
}

