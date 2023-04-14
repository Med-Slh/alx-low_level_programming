#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned integer
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length1, length2, lengthtotal;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = strlen(s1);
	length2 = strlen(s2);

	if (n >= length2)
		lengthtotal = length2;
	else
		lengthtotal = n;
	ptr = malloc(length1 + lengthtotal + 1);
	if (ptr == NULL)
		return (NULL);
	memcpy(ptr, s1, length1);
	memcpy(ptr + length1, s2, lengthtotal);
	ptr[length1 + lengthtotal] = '\0';
	return (ptr);
}
