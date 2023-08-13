#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * multiply - multiplies two numbers.
 * @num1: first no to multiply
 * @num2: second no to multiply.
 *
 * Return: 0
 */
char *multiply(char *num1, char *num2)
{
	int len1;
	int len2;
	int len;
	char *result;
	int i;
	int j;
	int b;
	int product;

	len1 = strlen(num1);
	len2 = strlen(num2);
	len = len1 + len2;
	result = (char *)malloc(len + 1);
	if (!result)
	{
		printf("error\n");
		exit(98);
	}
	memset(result, '0', len);
	result[len] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			b = (num1[i] - '0') * (num2[j] - '0');
			product = b + carry + (result[i + j + 1] - '0');
			carry = product / 10;
			result[i + j + 1] = (product % 10) + '0';
		}
		result[i] += carry;
	}
	return (result);
}
/**
 * main - mutiply 2 no.
 *
 * @argc: argument count.
 * @argv: argumen var.
 *
 * Return: resust.
 */
int main(int argc, char **argv)
{
	char *num1;
	char *num2;
	int j;
	int i;
	char  *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	num2 = (argv[1]);
	num1 = (argv[2]);
	/*mul = num1 * num2;*/
	result = multiply(num1, num2);
	int firstNonZero = 0;

	while (result[firstNonZero] == '0' && result[firstNonZero + 1] != '\0')
	{
		firstNonZero++;
	}
	printf("%s\n", result + firstNonZero);
	free(result);

	return (98);
}
