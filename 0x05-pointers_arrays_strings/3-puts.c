#include "main.h"

/**
 * _puts - A function that prints a string to stdout
 * followed by a new line
 * @str: string to print
 */

void _puts(char *str)
{
	int index;

	for (index = 0 ; *str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
