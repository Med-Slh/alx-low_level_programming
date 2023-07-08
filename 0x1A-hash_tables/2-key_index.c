#include "hash_tables.h"

/**
 * key_index - a function that return the index of a key
 * @key: the key
 * @size: the size of the array
 * Return: return the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash_value;

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
