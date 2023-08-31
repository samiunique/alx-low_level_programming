#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to binary strings
 *
 * Return: converted
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted;
        converted = 0;
if (b == NULL)
 {
return (0);
}
		else 
        while (*b)
        {
if (!isdigit(*b))
 {
        return (0);
}

                converted = (converted << 1) | (*b - '0');
				b++;
		}

        return (converted);
}
