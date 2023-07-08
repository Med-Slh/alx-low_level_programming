#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the HT
 * @ht: hash table
 * @key: the key of the hash table
 * @value: the value of the hash table
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	unsigned long int index;

	index = hash_djb2((const unsigned char *)key, ht->size);

	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		fre(new_node->value);
		fre(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
