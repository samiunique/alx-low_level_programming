#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - variadic fuc to print no.
 *
 * @separator: var points to char separetors.
 * @n: 2nd argumernt for variadic
 *
 * Return: return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(num, int));
		else if (separator == 0 || i == 0)
			printf("%d", va_arg(num, int));
		else
			printf("%s%d", separator, va_arg(num, int));
	}
	va_end(num);

	printf("\n");
}
