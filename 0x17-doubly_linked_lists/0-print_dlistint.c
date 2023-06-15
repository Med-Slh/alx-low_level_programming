#include "lists.h"
/**
 * print_dlistint - a funct that print all the elements of a list
 * @h: a pointer to the list
 *
 * Return: the number of nudes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
		printf("%d\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
