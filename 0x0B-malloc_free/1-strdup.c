#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: Null or pointer
 */
char *_strdup(char *str)
{
	unsigned int length;
	unsigned int j;
	char *ar;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	ar = malloc((length + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	while (str[j])
	{
		ar[j] = str[j];
		j++;
	}
	ar[j + 1] = 0;
	return (ar);
}
