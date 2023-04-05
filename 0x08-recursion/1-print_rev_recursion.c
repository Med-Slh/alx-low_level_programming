#include "main.h"
/**
 * _print_rev_recursion - function that print a string in revers
 * @s: character
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
