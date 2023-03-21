#include "main.h"
/**
 * print_alphabet_x10 - print_alphabet_x10 function
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char c;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
	_putchar('\n');
	}
}
