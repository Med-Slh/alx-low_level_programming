#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: string number one
 * @s2: string number two
 * Return: NULL or failure
 */
char *str_concat(char *s1, char *s2)
{
	int lengths1, lengths2, lengthtotal, i;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lengths1 = strlen(s1);
	lengths2 = strlen(s2);
	lengthtotal = lengths1 + lengths2;

	ar = malloc((lengthtotal + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < lengths1; i++)
	{
		ar[lengths1 + i] = s2[i];
	}
	return (ar);
}
