#include "main.h"

int cal_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - the natural square of a number
 * @n: an integer
 * Return: square root
 */
int_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * cal_sqrt_recursion - recurses to find the natural square
 * @n: an integer
 * @i: iterator
 * Return: the square root
 */
int cal_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (cal_sqrt_recursion(n, i + 1));
}
