#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add  two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int y, x = 0;
	int i;

	for (y = 1; y < argc; y++)
    {
        for (i = 0; argv[y][i] != '\0'; i++)
        {
            if (!isdigit(argv[y][i]))
            {
                printf("Error\n");
                return (1);
            }
        }

        x += atoi(argv[y]);
    }
        printf("%d\n", x);
    
    return (0);
}
