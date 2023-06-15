#include "lists.h"
/**
 * add_dnodeint_end - func that adds a node at the end
 * @head: pointer
 * @n: constant integer
 * Return: the adress of the new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *lastnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	lastnode = *head;

	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	newnode->prev = lastnode;
	lastnode->next = newnode;

	return (newnode);
}
