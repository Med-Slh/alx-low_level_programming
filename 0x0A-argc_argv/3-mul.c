#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int mult;
	
	if (argc < 3 || argc > 3)
        {
                printf("Error\n");
                return (1);
        }
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mult);
		return (0);
	}
	return (0);
}
