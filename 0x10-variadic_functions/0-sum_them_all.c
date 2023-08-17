#include <stdarg.h>

/**
 * sum_them_all - add up all list ints.
 *
 * @n: second agument for varidiac.
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add;
	int sum = 0;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		add = va_arg(nums, unsigned int);
		sum = sum + add;
	}
	va_end(nums);

	return (sum);
}
