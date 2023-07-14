root@84e18a8211e3:~/alx-low_level_programming/0x01-variables_if_else_while# cat 3-print_alphabets.c 
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the sequence of lowercase letters from
 *              'a' to 'z', followed by the sequence of uppercase letters
 *              from 'A' to 'Z', and finally the dollar sign ('$').
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char ch;

        for (ch = '0'; ch <= '9'; ch++)
        {
                putchar(ch);
        }

        for (ch = 'a'; ch <= 'f'; ch++)
        {
                putchar(ch);
        }
        putchar('\n');

        return (0);
}
