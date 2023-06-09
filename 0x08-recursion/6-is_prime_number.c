#include "main.h"
int primehelp(int x, int y);
/**
 * is_prime_number - function that returns if a number is prime or not
 * @n: integer
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primehelp(n, 2));
}
/**
 * primehelp - function that helps to find the prime
 * @x: integer that equals to n
 * @y: integer for itteration
 * Return: 0 or 1
 */
int primehelp(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (primehelp(x, y + 1));
}
