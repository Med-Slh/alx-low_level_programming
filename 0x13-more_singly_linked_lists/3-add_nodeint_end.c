#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - a function that add a node at the end
 * @head: pointer to a pointer.
 * @n: integer
 * Return: &node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *Newnode, *current;

	Newnode = malloc(sizeof(listint_t));
	if (!Newnode)
		return (NULL);

	Newnode->n = n;
	Newnode->next = NULL;

	if (*head == NULL)
	{
		*head = Newnode;
		return (Newnode);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = Newnode;
	return (Newnode);
}
