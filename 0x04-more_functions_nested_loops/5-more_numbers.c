#include <stdio.h>

/**
 * more_numbers - function to print numbers
 *
 * Description: This function generates numbers from 0 to 9
 *
 * Return: void
 */
void more_numbers(void)
{
    char ch = '0';

    while (ch <= '9')
    {
        putchar(ch);
        ch++;
    }

    putchar('\n');
}

int main()
{
    int i;
    
    for (i = 0; i < 10; i++)
    {
        print_numbers();
    }

    return 0;
}
