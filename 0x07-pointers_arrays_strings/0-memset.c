#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory area
 * @b: cansant byte
 * @n: number of times
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	i = 0;
	while (i <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
