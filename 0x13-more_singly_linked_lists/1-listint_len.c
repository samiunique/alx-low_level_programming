#include "lists.h"
/**
 * listint_len - print no of elements.
 *
 * @h: linked list
 *
 * Return: num
 */

size_t listint_len(const listint_t *h)
{
		size_t num = 0;

		while (h != NULL)
		{
			/*printf("%s\n", h->n);*/
			num++;
			h = h->next;
		}

			return (num);
}

