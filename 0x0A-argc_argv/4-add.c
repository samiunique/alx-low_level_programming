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

	if (!isdigit (argc))
	{
		printf("Error\n");
	}
		for (y = 1; y < argc; y++ )
	{
		y += atoi(argv[y]);
		
	printf("%d\n", x);
	}

	return (0);
}
