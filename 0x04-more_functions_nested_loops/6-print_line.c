#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * The line should end with a \n
 * @n: parameter to the print_line function
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

