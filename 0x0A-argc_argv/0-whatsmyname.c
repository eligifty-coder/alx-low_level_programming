#include <stdio.h>
/**
 * main - print program name
 * @argc: arguement count
 * @argv: arguements vector
 * Return: 0
 */

int main(int argc, char *arg[])
{
	(void) argc;

	printf("%s\n", arg[0]);
	return 0;
}
