#include "hash_tables.h"

/**
 * hash_table_create - a function that creat a hash table
 *
 * @size: The size of the array
 * Return: return a pointure or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (hash_table == NULL)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
		return (NULL);

	hash_table->size = size;
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
