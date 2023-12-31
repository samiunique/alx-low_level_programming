#include "lists.h"
/**
 * free_listint - free
 *
 * @head: pinter of first node.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	/*iterate through each node in list*/
	while ((current = head) != NULL)
	{
		/*set head as the next node*/
		head = head->next;
		free(current);
	}
}
