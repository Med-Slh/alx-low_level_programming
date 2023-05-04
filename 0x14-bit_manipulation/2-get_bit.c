#include "main.h"
/**
 * get_bit - fct that return the value of a bit at a given index.
 * @n: int
 * @index: int
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
