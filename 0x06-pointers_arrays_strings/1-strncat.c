#include <string.h>

/**
 * _strncat - Concatenate 2 strings up to n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Number of bytes to use from the source.
 *
 * Return: Pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = strlen(dest);
    int src_len = strlen(src);
    int copy_len = (n < src_len) ? n : src_len;
    int i;

    /* Copy the first 'copy_len' characters from 'src' to 'dest'. */
    for (i = 0; i < copy_len && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    /* Null-terminate the concatenated string in 'dest'. */
    dest[dest_len + i] = '\0';

    return dest;
}
