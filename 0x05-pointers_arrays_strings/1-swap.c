#include "main.h"

/**
 * swap_int - swap to int
 *
 * @a: int parameter
 * @b: int parameter
 * Return: noting
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
