#include"main.h"
#include <stdio.h>

/**
 * print_to_98 - print n to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @i: input
*/

void print_to_98(int i)
{
	i = 0;

	while (i <= 98)
	{
	printf("%d", i);
	if (i != 98)
	{
	printf(",");
	}
	i++;
	}
}
