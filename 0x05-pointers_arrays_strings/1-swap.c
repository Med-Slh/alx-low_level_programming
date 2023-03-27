#include "main.h"

/**
 * swap_int - swap to int
 *
 * @a: int parameter
 * @b: int parameter
 * Return: "0"
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = b;
	*b = temp;
}
