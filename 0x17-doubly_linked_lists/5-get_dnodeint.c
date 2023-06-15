#include "lists.h"
/**
 * get_dnodeint_at_index - func that returns the nth node
 * @head: pointer to the head
 * @index: unsigned integer and the index of wanted element
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp != NULL)
	{
		if (index == i)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
