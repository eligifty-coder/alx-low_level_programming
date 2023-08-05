#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int res1, res2;

	res1 = res2 = 0;
	if (argc == 3)
	{
		res1 = atoi(argv[1]);
		res2 = atoi(argv[2]);
		printf("%d\n", res1 * res2);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}

