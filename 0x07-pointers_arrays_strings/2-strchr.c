#include "main.h"
/**
 * _strchr - function that locates a character in string
 * @s: a string
 * @c: character
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int cr;

	for (cr = 0; s[cr] >= '\0'; cr++)
		if (s[cr] == c)
		{
			return (s + cr);
		}
	return ('\0');
}
