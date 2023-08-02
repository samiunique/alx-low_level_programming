/**
 * _puts_recursion - a function that prints a strin.
 *
 * @s: pointer for array of string.
 *
 * Return: string inside s.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
	_puts_recursion(s + 1);
	}
	else 
		putchar('\n');
}
