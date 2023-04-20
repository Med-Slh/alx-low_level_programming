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
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	return (array[0]);
}
