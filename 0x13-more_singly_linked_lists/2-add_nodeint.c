#include "lists.h"
/**
 * add_nodeint - function to add a new node in the beginning
 * @head: pointer to a pointer.
 * @n: an integer.
 * Return: &new element or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Newnode;

	Newnode = malloc(sizeof(listint_t));
	if (!Newnode)
		return (NULL);
	Newnode->n = n;
	Newnode->next = *head;
	*head = Newnode;

	return (Newnode);
}
