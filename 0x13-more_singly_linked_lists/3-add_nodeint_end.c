#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node@ end.
 *
 * @head: pointer to the first node of the list
 * @n: element int to add to new node
 *
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *temp;

	new_end = malloc(sizeof(listint_t));
	if (!new_end)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;
/* store head file in temporrary add*/

	temp = *head;

	/*place new_node first if head is NULL*/
	if (temp == NULL)
		*head = new_end;
	else
	{
		/*if head is not null, and next is not NULL*/
		while (temp->next != NULL)
			temp = temp->next;	/*go to the last node*/

		/*place our new node at the end*/
		temp->next = new_end;
	}

	return (*head);
}
