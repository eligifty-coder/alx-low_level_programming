#include "main.h"

/**
 * puts2 - A function that prints even numbers,
 * followed by a new line.
 * @str: string to print the chars from
 */

void puts2(char *str)
{
	int i;

	while (*str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
