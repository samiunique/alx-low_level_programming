#include "lists.h"

/**
 * sum_listint - function to add up
 *
 * @head: first node pointer
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		/*go to the next node*/
		head = head->next;
	}

	/*if list will be empty it will return sum = 0*/
	return (sum);
}
