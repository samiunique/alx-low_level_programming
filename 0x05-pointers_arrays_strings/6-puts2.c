/**
 * puts2 - print even no.
 *
 * @str: string points for int.
 *
 * Return: even
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 1 || i !=3 || i != 5 || i != 9)
			_putchar(str[i]);
	}
	_putchar("\n");
}
