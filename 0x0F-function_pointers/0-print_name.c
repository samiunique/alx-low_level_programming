#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - fuction to print name
 *
 * @name: name of the person
 * @f: variable for function pointer
 *
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
