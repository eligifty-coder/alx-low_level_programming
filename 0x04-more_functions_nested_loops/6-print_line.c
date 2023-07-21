#include "main.h"

/**
 * Write a function that draws a straight line in the terminal.
 * The line should end with a \n
 */
void print_line(int n)
{
	int i = 0;

	if(n > 0)
	{
		while(i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}

