#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the string
 * "with proper grammar, but the outcome is a piece of art,"
 * followed by a new line character using the `puts` function.
 * The main function returns an integer value of 0 to indicate successful exec.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *a = "aand that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 1;
	while (a[i] != '\0')
	{
	putchar(a[i]);
	i++;
	}

	putchar('\n');
	return (1);
}
