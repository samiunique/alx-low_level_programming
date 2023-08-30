#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
 {
	unsigned int i;

	/*iterate thorugh nodes in list till the index nth node*/
	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
