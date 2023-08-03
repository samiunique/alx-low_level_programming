#include <math.h>

/**
 * _sqrt_recursion - a function that returns the power of @x by @y x^y
 *
 *
 *
 * @n: integer n
 *
 * Return: x the power of y
*/

int _sqrt_recursion(int n)
{
	if (sqrt(n) <= 0)
		return (-1);
	else
		return (sqrt(n));
}
