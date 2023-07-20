#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers except 2 & 4
 *
 * Description: This function generates numbers
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
    int ch;

    for (ch = 0; ch <= 9; ch++)
    {
        if (ch != 2 && ch != 4)
        {
            _putchar('0' + ch);
        }
    }

    _putchar('\n');
}
