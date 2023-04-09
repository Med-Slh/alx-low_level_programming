#include <stdio.h>
/**
 * main - a function with two variables
 * @argc: integer
 * @argv: array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
