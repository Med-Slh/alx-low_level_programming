#include "main.h"
/**
 * factorial - function that return the factorial of a given number
 * @n: an integer number
 * Return: integer
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n = n * factorial(n - 1));
}
