#include "lists.h"

/**
 * add_nodeint - function to add new node at head
 * @head: the first node.
 * @n: data type for new node.
 *
 * Return: the new node pointer or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_new;

	add_new = malloc(sizeof(listint_t));
	if (add_new == NULL)
		return (NULL);

	/*link first node in head with the new_node*/
	if (*head == NULL)
		add_new->next = NULL;
	else
		add_new->next = *head;

	add_new->n = n;
	/*add new node at the beginning of the list*/
	*head = add_new;

	return (*head);
}
