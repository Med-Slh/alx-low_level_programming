#include "lists.h"

/**
 * dlistint_len - a func that print the number of elem
 * @h: a pointer to a list
 *
 * Return: the number of elem
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *node = h;

	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
