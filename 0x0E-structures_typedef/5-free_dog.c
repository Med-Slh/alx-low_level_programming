#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees yo dawgs
 * @d: yo dawg
 *
 * Return: void
 */
void free_dog(dog_t *d);
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
