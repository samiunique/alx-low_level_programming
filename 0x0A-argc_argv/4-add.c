#include <stdio.h>
#include <stdlib.h>

/**
 * main - add  two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int x, y;

	if (!isdigit (argc))
	{
		printf("Error\n");
		return (1);
	}

	x = (argv[1]);
	y = (argv[2]);
	if (x !< 0 && y !< 0)
	{
	printf("%d\n", x + y);
	}

	return (0);
}
