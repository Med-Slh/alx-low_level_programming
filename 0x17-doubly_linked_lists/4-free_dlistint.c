#include "lists.h"

/**
 * free_dlistint - func that frees a lk liste
 * @head: pointer to the head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextnode;

	while (head)
	{
		nextnode = head->next;
		free(head);
		head = nextnode;
	}
}
