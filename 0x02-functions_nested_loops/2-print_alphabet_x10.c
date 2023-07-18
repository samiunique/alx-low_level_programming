#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet 10x
 *
 * Description: This function generates alphabets in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
    char ch, i;

    for (i = 0; i <= 9; i++)
    {
        for (ch = 'a'; ch <= 'z'; ch++)
        {
            _putchar(ch);
        }
        _putchar('\n');
    }
}
