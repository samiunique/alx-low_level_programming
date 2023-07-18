#include <stdio.h>
#include "main.h"

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
	char *a = "_putchar";
	int i = 0;

	while (a[i] != '\0')
	{
	putchar(a[i]);
	i++;
	}

	putchar('\n');
	return 0;
}
