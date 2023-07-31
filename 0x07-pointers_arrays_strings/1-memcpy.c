/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 *	including the terminating null byte (\0)
 *
 * @src: source of string parameter input
 * @dest: destination of string
 * @n: n byte of src
 *
 * Return: pointer to dest input parameter
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	
	for (a = 0; a < n; ++a)
	{
		dest[a] = src[a];
	}
	
	return (dest);
}
