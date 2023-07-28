/**
 * _strncpy - Copy a string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Number of bytes to copy from source.
 *
 * Return: Pointer to the resulting string @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++);
    {
        dest[i] = src[i];
    }

    /* Fill the remaining characters in dest with null terminators.*/
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return (dest);
}
