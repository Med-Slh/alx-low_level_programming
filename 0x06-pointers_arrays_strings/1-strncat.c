#include "main.h"
/**
 * char *_strncat - concatenates two strings
 *
 * @dest: string 1
 * @src: string 2
 * @n: int
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	retutn(dest);
}
