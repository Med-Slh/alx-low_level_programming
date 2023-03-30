#include "main.h"
/**
 * *_strncpy -  function that copies a string
 *
 * @n: int
 * @dest: string 1
 * @src: string 2
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
			i++;
	}
	while (i < n)
	{
		dest[i] = '\0'
	}
	return (dest);
}
