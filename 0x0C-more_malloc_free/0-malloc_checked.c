#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: an integer
 *
 * Return: pointer or 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(*ptr));

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
