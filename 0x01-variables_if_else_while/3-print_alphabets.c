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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	return (0);
}
