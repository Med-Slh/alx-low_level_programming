#include "function_pointers.h"
/**
 * int_index - seach for integer
 * @array: the int array
 * @size: the array size
 * @cmp: the compare function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
}
