#include "3-clac.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_ mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return the diff of two num
 * @a: the first number
 * @b: the seond number
 * Return: the diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers.
 * @a: The first number
 * @b: The second number.
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the div
 * @a: the first num
 * @b: the second num
 * Return: the quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - return the remainder of the division
 * @a: the first num
 * @b: the second num
 * Return: the remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
