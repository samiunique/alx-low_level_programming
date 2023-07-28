#include <stdio.h>
#include <string.h>

/**
 * _strncat - function to concatenate 2 strings with n.
 *
 * @dest: pointer to file destination.
 * @src: pointer to file source.
 * @n: it will use at most n bytes from
 *
 * Return: pointer to resulting string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
    int dest_len = strlen(dest);
    int src_len = strlen(src);
    int copy_len = (n < src_len) ? n : src_len;
    int i;
	
	for (i = 0; i < copy_len; i++)
    {
        dest[dest_len + i] = src[i];
    }
	dest[dest_len + copy_len] = '\0';
	strncat(dest, src + copy_len, n - copy_len);
	
	return (dest);
}
