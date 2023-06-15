#include "lists.h"
/**
 * insert_dnodeint_at_index - fun that inserts a node
 * @h:a  pointer
 * @idx: position where to add the node
 * @n: the data of the node
 * Return: the address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	if (idx == 0)
	{
		new->next = temp;
		new->prev = NULL;
		if (current != NULL)
			current->prev = new;
		*h = new;
		return (new);
	}
	while (temp)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			new->prev = temp;
			if (temp->next != NULL)
				temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
