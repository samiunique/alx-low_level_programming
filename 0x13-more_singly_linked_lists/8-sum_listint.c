#include "lists.h"

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
