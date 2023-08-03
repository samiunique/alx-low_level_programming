/**
 * is_prime_number - a function that returns 0&10fpr prim or not
 *
 *
 * @n: integer to check
 *
 * Return: 0 or 1
*/

int is_prime_number(int n)
{
	/*n = -n;*/
	if (n / 1 == n || n / n == 1 || n % 2 != 0)
		return (1);
	else  if (n <= 1)
		return (0);
	else
		return (0);
}
