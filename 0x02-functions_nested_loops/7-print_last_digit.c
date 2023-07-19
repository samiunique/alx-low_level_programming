#include "main.h"
#include <ctype.h>

/**
 * print_last_digit - print last gigits of numbers
 *
 * @num: int argument
 *
 * Return: 0
 */
int print_last_digit(int num)
{
	num = num % 10;
        return ((num < 0 ) ? -num : num);
}
