#include <stdio.h>
#include <stdarg.h>

/**
 *  print_strings -  prints strings, followed by a new line.
 *
 *  @n: number of strings passed to the function
 *  @separator: string to be printed between the strings.
 *
 *  Return: string unless nil.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			str = ("(nil)");
		if (separator == NULL)
			printf("%s", str);
		else if (separator == 0 || i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

		va_end(list);

		printf("\n");
}

