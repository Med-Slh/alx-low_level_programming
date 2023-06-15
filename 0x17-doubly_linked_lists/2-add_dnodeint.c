#include "lists.h"

/**
 * *add_dnodeint - a func that add a node in the beg
 * @head: a pointer to the head
 * @n: an integer
 * Return: @ of the node or null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
		if (newnode == NULL)
			return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);


}
