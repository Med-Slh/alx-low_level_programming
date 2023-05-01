#include "lists.h"
/**
 * listint_len - a function that return the length of a list
 * @h: a pointer
 * Return: Integer
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
